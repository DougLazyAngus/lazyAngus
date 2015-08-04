#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t6080;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1170;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<System.Object>>
struct ICollection_1_t9024;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t638;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.List`1<System.Object>>
struct KeyCollection_t6087;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.List`1<System.Object>>
struct ValueCollection_t6088;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1134;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct IDictionary_2_t9025;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2869;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>[]
struct KeyValuePair_2U5BU5D_t9026;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>>
struct IEnumerator_1_t9027;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3911;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__38.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m32249(__this, method) (( void (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2__ctor_m21539_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m32250(__this, ___comparer, method) (( void (*) (Dictionary_2_t6080 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21541_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m32251(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6080 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21543_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m32252(__this, ___capacity, method) (( void (*) (Dictionary_2_t6080 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21545_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m32253(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6080 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21547_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m32254(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6080 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2__ctor_m21549_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32255(__this, method) (( Object_t* (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21551_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32256(__this, method) (( Object_t* (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21553_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m32257(__this, method) (( Object_t * (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21555_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m32258(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6080 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21557_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m32259(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6080 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21559_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m32260(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6080 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21561_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m32261(__this, ___key, method) (( bool (*) (Dictionary_2_t6080 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21563_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m32262(__this, ___key, method) (( void (*) (Dictionary_2_t6080 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21565_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32263(__this, method) (( bool (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21567_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32264(__this, method) (( Object_t * (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21569_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32265(__this, method) (( bool (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21571_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32266(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6080 *, KeyValuePair_2_t6084 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21573_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32267(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6080 *, KeyValuePair_2_t6084 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21575_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32268(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6080 *, KeyValuePair_2U5BU5D_t9026*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21577_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32269(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6080 *, KeyValuePair_2_t6084 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21579_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m32270(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6080 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21581_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32271(__this, method) (( Object_t * (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21583_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32272(__this, method) (( Object_t* (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21585_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32273(__this, method) (( Object_t * (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21587_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Count()
#define Dictionary_2_get_Count_m32274(__this, method) (( int32_t (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_get_Count_m21589_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Item(TKey)
#define Dictionary_2_get_Item_m32275(__this, ___key, method) (( List_1_t638 * (*) (Dictionary_2_t6080 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21591_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m32276(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6080 *, Object_t *, List_1_t638 *, const MethodInfo*))Dictionary_2_set_Item_m21593_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m32277(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6080 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21595_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m32278(__this, ___size, method) (( void (*) (Dictionary_2_t6080 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21597_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m32279(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6080 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21599_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m32280(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6084  (*) (Object_t * /* static, unused */, Object_t *, List_1_t638 *, const MethodInfo*))Dictionary_2_make_pair_m21601_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m32281(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, List_1_t638 *, const MethodInfo*))Dictionary_2_pick_key_m21603_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m32282(__this /* static, unused */, ___key, ___value, method) (( List_1_t638 * (*) (Object_t * /* static, unused */, Object_t *, List_1_t638 *, const MethodInfo*))Dictionary_2_pick_value_m21605_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m32283(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6080 *, KeyValuePair_2U5BU5D_t9026*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21607_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Resize()
#define Dictionary_2_Resize_m32284(__this, method) (( void (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_Resize_m21609_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Add(TKey,TValue)
#define Dictionary_2_Add_m32285(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6080 *, Object_t *, List_1_t638 *, const MethodInfo*))Dictionary_2_Add_m21611_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Clear()
#define Dictionary_2_Clear_m32286(__this, method) (( void (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_Clear_m21613_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m32287(__this, ___key, method) (( bool (*) (Dictionary_2_t6080 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21615_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m32288(__this, ___value, method) (( bool (*) (Dictionary_2_t6080 *, List_1_t638 *, const MethodInfo*))Dictionary_2_ContainsValue_m21617_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m32289(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6080 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2_GetObjectData_m21619_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m32290(__this, ___sender, method) (( void (*) (Dictionary_2_t6080 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21621_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Remove(TKey)
#define Dictionary_2_Remove_m32291(__this, ___key, method) (( bool (*) (Dictionary_2_t6080 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21623_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m32292(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6080 *, Object_t *, List_1_t638 **, const MethodInfo*))Dictionary_2_TryGetValue_m21625_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Keys()
#define Dictionary_2_get_Keys_m32293(__this, method) (( KeyCollection_t6087 * (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_get_Keys_m21626_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Values()
#define Dictionary_2_get_Values_m32294(__this, method) (( ValueCollection_t6088 * (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_get_Values_m21628_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m32295(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6080 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21630_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m32296(__this, ___value, method) (( List_1_t638 * (*) (Dictionary_2_t6080 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21632_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m32297(__this, ___pair, method) (( bool (*) (Dictionary_2_t6080 *, KeyValuePair_2_t6084 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21634_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m32298(__this, method) (( Enumerator_t6083  (*) (Dictionary_2_t6080 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21635_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m32299(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2088  (*) (Object_t * /* static, unused */, Object_t *, List_1_t638 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21637_gshared)(__this /* static, unused */, ___key, ___value, method)
