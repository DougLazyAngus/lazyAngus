#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t6157;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<System.Object>>
struct ICollection_1_t9123;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t682;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.List`1<System.Object>>
struct KeyCollection_t6164;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.List`1<System.Object>>
struct ValueCollection_t6165;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1185;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct IDictionary_2_t9124;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>[]
struct KeyValuePair_2U5BU5D_t9125;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>>
struct IEnumerator_1_t9126;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m33028(__this, method) (( void (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2__ctor_m21784_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33029(__this, ___comparer, method) (( void (*) (Dictionary_2_t6157 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21786_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m33030(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6157 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21788_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m33031(__this, ___capacity, method) (( void (*) (Dictionary_2_t6157 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21790_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33032(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6157 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21792_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m33033(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6157 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m21794_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33034(__this, method) (( Object_t* (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21796_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33035(__this, method) (( Object_t* (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21798_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33036(__this, method) (( Object_t * (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21800_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33037(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6157 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21802_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33038(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6157 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21804_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m33039(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6157 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21806_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m33040(__this, ___key, method) (( bool (*) (Dictionary_2_t6157 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21808_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m33041(__this, ___key, method) (( void (*) (Dictionary_2_t6157 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21810_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33042(__this, method) (( bool (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21812_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33043(__this, method) (( Object_t * (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21814_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33044(__this, method) (( bool (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21816_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33045(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6157 *, KeyValuePair_2_t6161 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21818_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33046(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6157 *, KeyValuePair_2_t6161 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21820_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33047(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6157 *, KeyValuePair_2U5BU5D_t9125*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21822_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33048(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6157 *, KeyValuePair_2_t6161 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21824_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33049(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6157 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21826_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33050(__this, method) (( Object_t * (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21828_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33051(__this, method) (( Object_t* (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21830_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33052(__this, method) (( Object_t * (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21832_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Count()
#define Dictionary_2_get_Count_m33053(__this, method) (( int32_t (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_get_Count_m21834_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Item(TKey)
#define Dictionary_2_get_Item_m33054(__this, ___key, method) (( List_1_t682 * (*) (Dictionary_2_t6157 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21836_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m33055(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6157 *, Object_t *, List_1_t682 *, const MethodInfo*))Dictionary_2_set_Item_m21838_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m33056(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6157 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21840_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m33057(__this, ___size, method) (( void (*) (Dictionary_2_t6157 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21842_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m33058(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6157 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21844_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m33059(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6161  (*) (Object_t * /* static, unused */, Object_t *, List_1_t682 *, const MethodInfo*))Dictionary_2_make_pair_m21846_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m33060(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, List_1_t682 *, const MethodInfo*))Dictionary_2_pick_key_m21848_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m33061(__this /* static, unused */, ___key, ___value, method) (( List_1_t682 * (*) (Object_t * /* static, unused */, Object_t *, List_1_t682 *, const MethodInfo*))Dictionary_2_pick_value_m21850_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m33062(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6157 *, KeyValuePair_2U5BU5D_t9125*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21852_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Resize()
#define Dictionary_2_Resize_m33063(__this, method) (( void (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_Resize_m21854_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Add(TKey,TValue)
#define Dictionary_2_Add_m33064(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6157 *, Object_t *, List_1_t682 *, const MethodInfo*))Dictionary_2_Add_m21856_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Clear()
#define Dictionary_2_Clear_m33065(__this, method) (( void (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_Clear_m21858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m33066(__this, ___key, method) (( bool (*) (Dictionary_2_t6157 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21860_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m33067(__this, ___value, method) (( bool (*) (Dictionary_2_t6157 *, List_1_t682 *, const MethodInfo*))Dictionary_2_ContainsValue_m21862_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m33068(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6157 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m21864_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m33069(__this, ___sender, method) (( void (*) (Dictionary_2_t6157 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21866_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Remove(TKey)
#define Dictionary_2_Remove_m33070(__this, ___key, method) (( bool (*) (Dictionary_2_t6157 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21868_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m33071(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6157 *, Object_t *, List_1_t682 **, const MethodInfo*))Dictionary_2_TryGetValue_m21870_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Keys()
#define Dictionary_2_get_Keys_m33072(__this, method) (( KeyCollection_t6164 * (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_get_Keys_m21871_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Values()
#define Dictionary_2_get_Values_m33073(__this, method) (( ValueCollection_t6165 * (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_get_Values_m21873_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m33074(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6157 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21875_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m33075(__this, ___value, method) (( List_1_t682 * (*) (Dictionary_2_t6157 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21877_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m33076(__this, ___pair, method) (( bool (*) (Dictionary_2_t6157 *, KeyValuePair_2_t6161 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21879_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m33077(__this, method) (( Enumerator_t6160  (*) (Dictionary_2_t6157 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21880_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m33078(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, Object_t *, List_1_t682 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21882_gshared)(__this /* static, unused */, ___key, ___value, method)
