#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t6980;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8839;
// System.Collections.ICollection
struct ICollection_t704;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_t6982;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_t6983;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5331;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6925;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7832;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7204;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3909;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__48.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_57MethodDeclarations.h"
#define Dictionary_2__ctor_m43882(__this, method) (( void (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2__ctor_m43883_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m43884(__this, ___comparer, method) (( void (*) (Dictionary_2_t6980 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m43885_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m43886(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6980 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m43887_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Int32)
#define Dictionary_2__ctor_m43888(__this, ___capacity, method) (( void (*) (Dictionary_2_t6980 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m43889_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m43890(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6980 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m43891_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m43892(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6980 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))Dictionary_2__ctor_m43893_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m43894(__this, method) (( Object_t* (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m43895_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m43896(__this, method) (( Object_t* (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m43897_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m43898(__this, method) (( Object_t * (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m43899_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m43900(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6980 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m43901_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m43902(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6980 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m43903_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m43904(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6980 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m43905_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m43906(__this, ___key, method) (( bool (*) (Dictionary_2_t6980 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m43907_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m43908(__this, ___key, method) (( void (*) (Dictionary_2_t6980 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m43909_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m43910(__this, method) (( bool (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m43911_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m43912(__this, method) (( Object_t * (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m43913_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m43914(__this, method) (( bool (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m43915_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m43916(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6980 *, KeyValuePair_2_t6981 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m43917_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m43918(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6980 *, KeyValuePair_2_t6981 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m43919_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m43920(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6980 *, KeyValuePair_2U5BU5D_t7832*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m43921_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m43922(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6980 *, KeyValuePair_2_t6981 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m43923_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m43924(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6980 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m43925_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m43926(__this, method) (( Object_t * (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m43927_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m43928(__this, method) (( Object_t* (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m43929_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m43930(__this, method) (( Object_t * (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m43931_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Count()
#define Dictionary_2_get_Count_m43932(__this, method) (( int32_t (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_get_Count_m43933_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Item(TKey)
#define Dictionary_2_get_Item_m43934(__this, ___key, method) (( float (*) (Dictionary_2_t6980 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m43935_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m43936(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6980 *, String_t*, float, const MethodInfo*))Dictionary_2_set_Item_m43937_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m43938(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6980 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m43939_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m43940(__this, ___size, method) (( void (*) (Dictionary_2_t6980 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m43941_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m43942(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6980 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m43943_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m43944(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6981  (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_make_pair_m43945_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Single>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m43946(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_pick_key_m43947_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m43948(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_pick_value_m43949_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m43950(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6980 *, KeyValuePair_2U5BU5D_t7832*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m43951_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Resize()
#define Dictionary_2_Resize_m43952(__this, method) (( void (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_Resize_m43953_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Add(TKey,TValue)
#define Dictionary_2_Add_m43954(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6980 *, String_t*, float, const MethodInfo*))Dictionary_2_Add_m43955_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Clear()
#define Dictionary_2_Clear_m43956(__this, method) (( void (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_Clear_m43957_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m43958(__this, ___key, method) (( bool (*) (Dictionary_2_t6980 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m43959_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m43960(__this, ___value, method) (( bool (*) (Dictionary_2_t6980 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m43961_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m43962(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6980 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))Dictionary_2_GetObjectData_m43963_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m43964(__this, ___sender, method) (( void (*) (Dictionary_2_t6980 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m43965_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::Remove(TKey)
#define Dictionary_2_Remove_m43966(__this, ___key, method) (( bool (*) (Dictionary_2_t6980 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m43967_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m43968(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6980 *, String_t*, float*, const MethodInfo*))Dictionary_2_TryGetValue_m43969_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Keys()
#define Dictionary_2_get_Keys_m43970(__this, method) (( KeyCollection_t6982 * (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_get_Keys_m43971_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Values()
#define Dictionary_2_get_Values_m43972(__this, method) (( ValueCollection_t6983 * (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_get_Values_m43973_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Single>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m43974(__this, ___key, method) (( String_t* (*) (Dictionary_2_t6980 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m43975_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m43976(__this, ___value, method) (( float (*) (Dictionary_2_t6980 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m43977_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m43978(__this, ___pair, method) (( bool (*) (Dictionary_2_t6980 *, KeyValuePair_2_t6981 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m43979_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m43980(__this, method) (( Enumerator_t6984  (*) (Dictionary_2_t6980 *, const MethodInfo*))Dictionary_2_GetEnumerator_m43981_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Single>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m43982(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2086  (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m43983_gshared)(__this /* static, unused */, ___key, ___value, method)
