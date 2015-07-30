#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Dictionary_2_t1478;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ICollection_1_t9019;
// System.Collections.ICollection
struct ICollection_t704;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t764;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct KeyCollection_t6220;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ValueCollection_t6221;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5331;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IDictionary_2_t1357;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>[]
struct KeyValuePair_2U5BU5D_t9093;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct IEnumerator_1_t1490;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3909;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m7430(__this, method) (( void (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2__ctor_m21523_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m34245(__this, ___comparer, method) (( void (*) (Dictionary_2_t1478 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21525_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m7449(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1478 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21527_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m34246(__this, ___capacity, method) (( void (*) (Dictionary_2_t1478 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21529_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m34247(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1478 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21531_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m34248(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1478 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))Dictionary_2__ctor_m21533_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m34249(__this, method) (( Object_t* (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21535_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m34250(__this, method) (( Object_t* (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21537_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m34251(__this, method) (( Object_t * (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21539_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m34252(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1478 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21541_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m34253(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1478 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21543_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m34254(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1478 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21545_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m34255(__this, ___key, method) (( bool (*) (Dictionary_2_t1478 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21547_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m34256(__this, ___key, method) (( void (*) (Dictionary_2_t1478 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21549_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m34257(__this, method) (( bool (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21551_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34258(__this, method) (( Object_t * (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21553_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m34259(__this, method) (( bool (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21555_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m34260(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1478 *, KeyValuePair_2_t1487 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21557_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34261(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1478 *, KeyValuePair_2_t1487 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21559_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34262(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1478 *, KeyValuePair_2U5BU5D_t9093*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21561_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m34263(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1478 *, KeyValuePair_2_t1487 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21563_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m34264(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1478 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21565_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m34265(__this, method) (( Object_t * (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21567_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34266(__this, method) (( Object_t* (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21569_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m34267(__this, method) (( Object_t * (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21571_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Count()
#define Dictionary_2_get_Count_m34268(__this, method) (( int32_t (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_get_Count_m21573_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Item(TKey)
#define Dictionary_2_get_Item_m34269(__this, ___key, method) (( Object_t* (*) (Dictionary_2_t1478 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21575_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m34270(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1478 *, String_t*, Object_t*, const MethodInfo*))Dictionary_2_set_Item_m21577_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m34271(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1478 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21579_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m34272(__this, ___size, method) (( void (*) (Dictionary_2_t1478 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21581_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m34273(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1478 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21583_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m34274(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1487  (*) (Object_t * /* static, unused */, String_t*, Object_t*, const MethodInfo*))Dictionary_2_make_pair_m21585_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m34275(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t*, const MethodInfo*))Dictionary_2_pick_key_m21587_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m34276(__this /* static, unused */, ___key, ___value, method) (( Object_t* (*) (Object_t * /* static, unused */, String_t*, Object_t*, const MethodInfo*))Dictionary_2_pick_value_m21589_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m34277(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1478 *, KeyValuePair_2U5BU5D_t9093*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21591_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Resize()
#define Dictionary_2_Resize_m34278(__this, method) (( void (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_Resize_m21593_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Add(TKey,TValue)
#define Dictionary_2_Add_m34279(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1478 *, String_t*, Object_t*, const MethodInfo*))Dictionary_2_Add_m21595_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Clear()
#define Dictionary_2_Clear_m34280(__this, method) (( void (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_Clear_m21597_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m34281(__this, ___key, method) (( bool (*) (Dictionary_2_t1478 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21599_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m34282(__this, ___value, method) (( bool (*) (Dictionary_2_t1478 *, Object_t*, const MethodInfo*))Dictionary_2_ContainsValue_m21601_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m34283(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1478 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))Dictionary_2_GetObjectData_m21603_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m34284(__this, ___sender, method) (( void (*) (Dictionary_2_t1478 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21605_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Remove(TKey)
#define Dictionary_2_Remove_m34285(__this, ___key, method) (( bool (*) (Dictionary_2_t1478 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21607_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m34286(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1478 *, String_t*, Object_t**, const MethodInfo*))Dictionary_2_TryGetValue_m21609_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Keys()
#define Dictionary_2_get_Keys_m34287(__this, method) (( KeyCollection_t6220 * (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_get_Keys_m21610_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Values()
#define Dictionary_2_get_Values_m34288(__this, method) (( ValueCollection_t6221 * (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_get_Values_m21612_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m34289(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1478 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21614_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m34290(__this, ___value, method) (( Object_t* (*) (Dictionary_2_t1478 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21616_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m34291(__this, ___pair, method) (( bool (*) (Dictionary_2_t1478 *, KeyValuePair_2_t1487 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21618_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m7450(__this, method) (( Enumerator_t1488  (*) (Dictionary_2_t1478 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21619_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m34292(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2086  (*) (Object_t * /* static, unused */, String_t*, Object_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21621_gshared)(__this /* static, unused */, ___key, ___value, method)
