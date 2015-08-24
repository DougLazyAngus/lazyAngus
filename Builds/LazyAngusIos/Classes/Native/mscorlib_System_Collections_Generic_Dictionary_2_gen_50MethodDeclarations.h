#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>
struct Dictionary_2_t251;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<GP_TBM_Match>
struct ICollection_1_t8825;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// GP_TBM_Match
struct GP_TBM_Match_t248;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,GP_TBM_Match>
struct KeyCollection_t5565;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,GP_TBM_Match>
struct ValueCollection_t5566;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5380;
// System.Collections.Generic.IDictionary`2<System.String,GP_TBM_Match>
struct IDictionary_2_t8826;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.String,GP_TBM_Match>[]
struct KeyValuePair_2U5BU5D_t8827;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,GP_TBM_Match>>
struct IEnumerator_1_t8828;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
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
#define Dictionary_2__ctor_m24316(__this, method) (( void (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2__ctor_m21817_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24317(__this, ___comparer, method) (( void (*) (Dictionary_2_t251 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21819_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m24318(__this, ___dictionary, method) (( void (*) (Dictionary_2_t251 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21821_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Int32)
#define Dictionary_2__ctor_m24319(__this, ___capacity, method) (( void (*) (Dictionary_2_t251 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21823_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24320(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t251 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21825_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m24321(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t251 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m21827_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24322(__this, method) (( Object_t* (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21829_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24323(__this, method) (( Object_t* (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21831_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m24324(__this, method) (( Object_t * (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21833_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24325(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t251 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21835_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24326(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t251 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21837_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m24327(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t251 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21839_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m24328(__this, ___key, method) (( bool (*) (Dictionary_2_t251 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21841_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m24329(__this, ___key, method) (( void (*) (Dictionary_2_t251 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21843_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24330(__this, method) (( bool (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21845_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24331(__this, method) (( Object_t * (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24332(__this, method) (( bool (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21849_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24333(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t251 *, KeyValuePair_2_t5564 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21851_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24334(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t251 *, KeyValuePair_2_t5564 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21853_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24335(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t251 *, KeyValuePair_2U5BU5D_t8827*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21855_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24336(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t251 *, KeyValuePair_2_t5564 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21857_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24337(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t251 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21859_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24338(__this, method) (( Object_t * (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21861_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24339(__this, method) (( Object_t* (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21863_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24340(__this, method) (( Object_t * (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21865_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Count()
#define Dictionary_2_get_Count_m24341(__this, method) (( int32_t (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_get_Count_m21867_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Item(TKey)
#define Dictionary_2_get_Item_m24342(__this, ___key, method) (( GP_TBM_Match_t248 * (*) (Dictionary_2_t251 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21869_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m24343(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t251 *, String_t*, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_set_Item_m21871_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m24344(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t251 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21873_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m24345(__this, ___size, method) (( void (*) (Dictionary_2_t251 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21875_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m24346(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t251 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21877_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m24347(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5564  (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_make_pair_m21879_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m24348(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_pick_key_m21881_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m24349(__this /* static, unused */, ___key, ___value, method) (( GP_TBM_Match_t248 * (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_pick_value_m21883_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m24350(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t251 *, KeyValuePair_2U5BU5D_t8827*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21885_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Resize()
#define Dictionary_2_Resize_m24351(__this, method) (( void (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_Resize_m21887_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Add(TKey,TValue)
#define Dictionary_2_Add_m24352(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t251 *, String_t*, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_Add_m21889_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Clear()
#define Dictionary_2_Clear_m24353(__this, method) (( void (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_Clear_m21891_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m24354(__this, ___key, method) (( bool (*) (Dictionary_2_t251 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21893_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m24355(__this, ___value, method) (( bool (*) (Dictionary_2_t251 *, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_ContainsValue_m21895_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m24356(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t251 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m21897_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m24357(__this, ___sender, method) (( void (*) (Dictionary_2_t251 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21899_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Remove(TKey)
#define Dictionary_2_Remove_m24358(__this, ___key, method) (( bool (*) (Dictionary_2_t251 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21901_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m24359(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t251 *, String_t*, GP_TBM_Match_t248 **, const MethodInfo*))Dictionary_2_TryGetValue_m21903_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Keys()
#define Dictionary_2_get_Keys_m24360(__this, method) (( KeyCollection_t5565 * (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_get_Keys_m21904_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Values()
#define Dictionary_2_get_Values_m24361(__this, method) (( ValueCollection_t5566 * (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_get_Values_m21906_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m24362(__this, ___key, method) (( String_t* (*) (Dictionary_2_t251 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21908_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m24363(__this, ___value, method) (( GP_TBM_Match_t248 * (*) (Dictionary_2_t251 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21910_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m24364(__this, ___pair, method) (( bool (*) (Dictionary_2_t251 *, KeyValuePair_2_t5564 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21912_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m24365(__this, method) (( Enumerator_t5567  (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21913_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m24366(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21915_gshared)(__this /* static, unused */, ___key, ___value, method)
