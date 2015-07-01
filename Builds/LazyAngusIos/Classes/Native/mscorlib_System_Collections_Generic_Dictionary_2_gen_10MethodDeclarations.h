#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t204;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1188;
// System.Collections.Generic.ICollection`1<FBScore>
struct ICollection_1_t4208;
// System.Collections.ICollection
struct ICollection_t547;
// System.Object
struct Object_t;
// FBScore
struct FBScore_t225;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FBScore>
struct KeyCollection_t3430;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>
struct ValueCollection_t3431;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3254;
// System.Collections.Generic.IDictionary`2<System.String,FBScore>
struct IDictionary_2_t4209;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1198;
// System.Collections.Generic.KeyValuePair`2<System.String,FBScore>[]
struct KeyValuePair_2U5BU5D_t4210;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FBScore>>
struct IEnumerator_1_t4211;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1396;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"
#define Dictionary_2__ctor_m2431(__this, method) (( void (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2__ctor_m16705_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19058(__this, ___comparer, method) (( void (*) (Dictionary_2_t204 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16707_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m19059(__this, ___dictionary, method) (( void (*) (Dictionary_2_t204 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16709_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m19060(__this, ___capacity, method) (( void (*) (Dictionary_2_t204 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16711_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19061(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t204 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16713_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m19062(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t204 *, SerializationInfo_t1198 *, StreamingContext_t1199 , const MethodInfo*))Dictionary_2__ctor_m16715_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19063(__this, method) (( Object_t* (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16717_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19064(__this, method) (( Object_t* (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16719_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m19065(__this, method) (( Object_t * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m16721_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19066(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16723_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19067(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t204 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16725_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m19068(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t204 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16727_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m19069(__this, ___key, method) (( bool (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16729_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m19070(__this, ___key, method) (( void (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16731_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19071(__this, method) (( bool (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16733_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19072(__this, method) (( Object_t * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16735_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19073(__this, method) (( bool (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16737_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19074(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t204 *, KeyValuePair_2_t545 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16739_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19075(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t204 *, KeyValuePair_2_t545 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16741_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19076(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t204 *, KeyValuePair_2U5BU5D_t4210*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16743_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19077(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t204 *, KeyValuePair_2_t545 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16745_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19078(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t204 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16747_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19079(__this, method) (( Object_t * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16749_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19080(__this, method) (( Object_t* (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16751_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19081(__this, method) (( Object_t * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16753_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Count()
#define Dictionary_2_get_Count_m19082(__this, method) (( int32_t (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_get_Count_m16755_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m19083(__this, ___key, method) (( FBScore_t225 * (*) (Dictionary_2_t204 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m16757_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m19084(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t204 *, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_set_Item_m16759_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m19085(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t204 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16761_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m19086(__this, ___size, method) (( void (*) (Dictionary_2_t204 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16763_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m19087(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t204 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16765_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m19088(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t545  (*) (Object_t * /* static, unused */, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_make_pair_m16767_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m19089(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_pick_key_m16769_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m19090(__this /* static, unused */, ___key, ___value, method) (( FBScore_t225 * (*) (Object_t * /* static, unused */, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_pick_value_m16771_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m19091(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t204 *, KeyValuePair_2U5BU5D_t4210*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16773_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Resize()
#define Dictionary_2_Resize_m19092(__this, method) (( void (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_Resize_m16775_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m19093(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t204 *, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_Add_m16777_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Clear()
#define Dictionary_2_Clear_m19094(__this, method) (( void (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_Clear_m16779_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m19095(__this, ___key, method) (( bool (*) (Dictionary_2_t204 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m16781_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m19096(__this, ___value, method) (( bool (*) (Dictionary_2_t204 *, FBScore_t225 *, const MethodInfo*))Dictionary_2_ContainsValue_m16783_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m19097(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t204 *, SerializationInfo_t1198 *, StreamingContext_t1199 , const MethodInfo*))Dictionary_2_GetObjectData_m16785_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m19098(__this, ___sender, method) (( void (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16787_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::Remove(TKey)
#define Dictionary_2_Remove_m19099(__this, ___key, method) (( bool (*) (Dictionary_2_t204 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m16789_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m19100(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t204 *, String_t*, FBScore_t225 **, const MethodInfo*))Dictionary_2_TryGetValue_m16791_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Keys()
#define Dictionary_2_get_Keys_m19101(__this, method) (( KeyCollection_t3430 * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_get_Keys_m16792_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Values()
#define Dictionary_2_get_Values_m19102(__this, method) (( ValueCollection_t3431 * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_get_Values_m16794_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m19103(__this, ___key, method) (( String_t* (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16796_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m19104(__this, ___value, method) (( FBScore_t225 * (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16798_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m19105(__this, ___pair, method) (( bool (*) (Dictionary_2_t204 *, KeyValuePair_2_t545 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16800_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m2462(__this, method) (( Enumerator_t546  (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16801_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FBScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m19106(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1663  (*) (Object_t * /* static, unused */, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16803_gshared)(__this /* static, unused */, ___key, ___value, method)
