#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct Dictionary_2_t1461;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t9004;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct ICollection_1_t9077;
// System.Collections.ICollection
struct ICollection_t707;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t648;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct KeyCollection_t6189;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct ValueCollection_t6190;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t6186;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct IDictionary_2_t1225;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>[]
struct KeyValuePair_2U5BU5D_t9078;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>>
struct IEnumerator_1_t9079;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_50.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__46.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m7383(__this, method) (( void (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2__ctor_m21554_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33605(__this, ___comparer, method) (( void (*) (Dictionary_2_t1461 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21556_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m33606(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1461 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21558_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m33607(__this, ___capacity, method) (( void (*) (Dictionary_2_t1461 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21560_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33608(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1461 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21562_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m33609(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1461 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m21564_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33610(__this, method) (( Object_t* (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21566_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33611(__this, method) (( Object_t* (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21568_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33612(__this, method) (( Object_t * (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21570_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33613(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1461 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21572_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33614(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1461 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21574_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m33615(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1461 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21576_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m33616(__this, ___key, method) (( bool (*) (Dictionary_2_t1461 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21578_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m33617(__this, ___key, method) (( void (*) (Dictionary_2_t1461 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21580_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33618(__this, method) (( bool (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21582_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33619(__this, method) (( Object_t * (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21584_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33620(__this, method) (( bool (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21586_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33621(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1461 *, KeyValuePair_2_t6188 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21588_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33622(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1461 *, KeyValuePair_2_t6188 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21590_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33623(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1461 *, KeyValuePair_2U5BU5D_t9078*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21592_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33624(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1461 *, KeyValuePair_2_t6188 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21594_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33625(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1461 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21596_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33626(__this, method) (( Object_t * (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21598_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33627(__this, method) (( Object_t* (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21600_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33628(__this, method) (( Object_t * (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21602_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::get_Count()
#define Dictionary_2_get_Count_m33629(__this, method) (( int32_t (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_get_Count_m21604_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::get_Item(TKey)
#define Dictionary_2_get_Item_m33630(__this, ___key, method) (( Object_t* (*) (Dictionary_2_t1461 *, Type_t *, const MethodInfo*))Dictionary_2_get_Item_m21606_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m33631(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1461 *, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_set_Item_m21608_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m33632(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1461 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21610_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m33633(__this, ___size, method) (( void (*) (Dictionary_2_t1461 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21612_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m33634(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1461 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21614_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m33635(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6188  (*) (Object_t * /* static, unused */, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_make_pair_m21616_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m33636(__this /* static, unused */, ___key, ___value, method) (( Type_t * (*) (Object_t * /* static, unused */, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_pick_key_m21618_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m33637(__this /* static, unused */, ___key, ___value, method) (( Object_t* (*) (Object_t * /* static, unused */, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_pick_value_m21620_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m33638(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1461 *, KeyValuePair_2U5BU5D_t9078*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21622_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Resize()
#define Dictionary_2_Resize_m33639(__this, method) (( void (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_Resize_m21624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Add(TKey,TValue)
#define Dictionary_2_Add_m33640(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1461 *, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_Add_m21626_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Clear()
#define Dictionary_2_Clear_m33641(__this, method) (( void (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_Clear_m21628_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m33642(__this, ___key, method) (( bool (*) (Dictionary_2_t1461 *, Type_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21630_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m33643(__this, ___value, method) (( bool (*) (Dictionary_2_t1461 *, Object_t*, const MethodInfo*))Dictionary_2_ContainsValue_m21632_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m33644(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1461 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m21634_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m33645(__this, ___sender, method) (( void (*) (Dictionary_2_t1461 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21636_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Remove(TKey)
#define Dictionary_2_Remove_m33646(__this, ___key, method) (( bool (*) (Dictionary_2_t1461 *, Type_t *, const MethodInfo*))Dictionary_2_Remove_m21638_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m33647(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1461 *, Type_t *, Object_t**, const MethodInfo*))Dictionary_2_TryGetValue_m21640_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::get_Keys()
#define Dictionary_2_get_Keys_m33648(__this, method) (( KeyCollection_t6189 * (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_get_Keys_m21641_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::get_Values()
#define Dictionary_2_get_Values_m33649(__this, method) (( ValueCollection_t6190 * (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_get_Values_m21643_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m33650(__this, ___key, method) (( Type_t * (*) (Dictionary_2_t1461 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21645_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m33651(__this, ___value, method) (( Object_t* (*) (Dictionary_2_t1461 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21647_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m33652(__this, ___pair, method) (( bool (*) (Dictionary_2_t1461 *, KeyValuePair_2_t6188 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21649_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m33653(__this, method) (( Enumerator_t6191  (*) (Dictionary_2_t1461 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21650_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m33654(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21652_gshared)(__this /* static, unused */, ___key, ___value, method)
