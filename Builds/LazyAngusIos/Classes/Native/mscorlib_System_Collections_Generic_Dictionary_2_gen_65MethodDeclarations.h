#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>
struct Dictionary_2_t7082;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<Parse.ParseACL>
struct ICollection_1_t9171;
// System.Collections.ICollection
struct ICollection_t704;
// System.Object
struct Object_t;
// Parse.ParseACL
struct ParseACL_t1161;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseACL>
struct KeyCollection_t7084;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.ParseACL>
struct ValueCollection_t7085;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5331;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>
struct IDictionary_2_t6961;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>[]
struct KeyValuePair_2U5BU5D_t9244;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>>
struct IEnumerator_1_t9245;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3909;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_62.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Parse.ParseACL>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__58.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m45235(__this, method) (( void (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2__ctor_m21523_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m45236(__this, ___comparer, method) (( void (*) (Dictionary_2_t7082 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21525_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m45237(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7082 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21527_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Int32)
#define Dictionary_2__ctor_m45238(__this, ___capacity, method) (( void (*) (Dictionary_2_t7082 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21529_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m45239(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7082 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21531_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m45240(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7082 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))Dictionary_2__ctor_m21533_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45241(__this, method) (( Object_t* (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21535_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45242(__this, method) (( Object_t* (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21537_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45243(__this, method) (( Object_t * (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21539_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45244(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7082 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21541_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45245(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7082 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21543_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m45246(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7082 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21545_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m45247(__this, ___key, method) (( bool (*) (Dictionary_2_t7082 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21547_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m45248(__this, ___key, method) (( void (*) (Dictionary_2_t7082 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21549_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45249(__this, method) (( bool (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21551_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45250(__this, method) (( Object_t * (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21553_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45251(__this, method) (( bool (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21555_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45252(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7082 *, KeyValuePair_2_t7083 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21557_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45253(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7082 *, KeyValuePair_2_t7083 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21559_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45254(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7082 *, KeyValuePair_2U5BU5D_t9244*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21561_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45255(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7082 *, KeyValuePair_2_t7083 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21563_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45256(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7082 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21565_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45257(__this, method) (( Object_t * (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21567_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45258(__this, method) (( Object_t* (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21569_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45259(__this, method) (( Object_t * (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21571_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::get_Count()
#define Dictionary_2_get_Count_m45260(__this, method) (( int32_t (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_get_Count_m21573_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::get_Item(TKey)
#define Dictionary_2_get_Item_m45261(__this, ___key, method) (( ParseACL_t1161 * (*) (Dictionary_2_t7082 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21575_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m45262(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7082 *, String_t*, ParseACL_t1161 *, const MethodInfo*))Dictionary_2_set_Item_m21577_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m45263(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7082 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21579_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m45264(__this, ___size, method) (( void (*) (Dictionary_2_t7082 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21581_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m45265(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7082 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21583_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m45266(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7083  (*) (Object_t * /* static, unused */, String_t*, ParseACL_t1161 *, const MethodInfo*))Dictionary_2_make_pair_m21585_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m45267(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, ParseACL_t1161 *, const MethodInfo*))Dictionary_2_pick_key_m21587_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m45268(__this /* static, unused */, ___key, ___value, method) (( ParseACL_t1161 * (*) (Object_t * /* static, unused */, String_t*, ParseACL_t1161 *, const MethodInfo*))Dictionary_2_pick_value_m21589_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m45269(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7082 *, KeyValuePair_2U5BU5D_t9244*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21591_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Resize()
#define Dictionary_2_Resize_m45270(__this, method) (( void (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_Resize_m21593_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Add(TKey,TValue)
#define Dictionary_2_Add_m45271(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7082 *, String_t*, ParseACL_t1161 *, const MethodInfo*))Dictionary_2_Add_m21595_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Clear()
#define Dictionary_2_Clear_m45272(__this, method) (( void (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_Clear_m21597_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m45273(__this, ___key, method) (( bool (*) (Dictionary_2_t7082 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21599_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m45274(__this, ___value, method) (( bool (*) (Dictionary_2_t7082 *, ParseACL_t1161 *, const MethodInfo*))Dictionary_2_ContainsValue_m21601_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m45275(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7082 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))Dictionary_2_GetObjectData_m21603_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m45276(__this, ___sender, method) (( void (*) (Dictionary_2_t7082 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21605_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Remove(TKey)
#define Dictionary_2_Remove_m45277(__this, ___key, method) (( bool (*) (Dictionary_2_t7082 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21607_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m45278(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7082 *, String_t*, ParseACL_t1161 **, const MethodInfo*))Dictionary_2_TryGetValue_m21609_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::get_Keys()
#define Dictionary_2_get_Keys_m45279(__this, method) (( KeyCollection_t7084 * (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_get_Keys_m21610_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::get_Values()
#define Dictionary_2_get_Values_m45280(__this, method) (( ValueCollection_t7085 * (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_get_Values_m21612_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m45281(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7082 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21614_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m45282(__this, ___value, method) (( ParseACL_t1161 * (*) (Dictionary_2_t7082 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21616_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m45283(__this, ___pair, method) (( bool (*) (Dictionary_2_t7082 *, KeyValuePair_2_t7083 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21618_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m45284(__this, method) (( Enumerator_t7086  (*) (Dictionary_2_t7082 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21619_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m45285(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2086  (*) (Object_t * /* static, unused */, String_t*, ParseACL_t1161 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21621_gshared)(__this /* static, unused */, ___key, ___value, method)
