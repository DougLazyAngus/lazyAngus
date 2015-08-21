#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t7058;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8936;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_t7060;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_t7061;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5377;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7003;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7910;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7282;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__49.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_58MethodDeclarations.h"
#define Dictionary_2__ctor_m44670(__this, method) (( void (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2__ctor_m44671_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44672(__this, ___comparer, method) (( void (*) (Dictionary_2_t7058 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44673_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m44674(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7058 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44675_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Int32)
#define Dictionary_2__ctor_m44676(__this, ___capacity, method) (( void (*) (Dictionary_2_t7058 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44677_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44678(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7058 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44679_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m44680(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7058 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m44681_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44682(__this, method) (( Object_t* (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44683_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44684(__this, method) (( Object_t* (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44685_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44686(__this, method) (( Object_t * (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44687_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44688(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7058 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44689_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44690(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7058 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44691_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m44692(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7058 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44693_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m44694(__this, ___key, method) (( bool (*) (Dictionary_2_t7058 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44695_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m44696(__this, ___key, method) (( void (*) (Dictionary_2_t7058 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44697_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44698(__this, method) (( bool (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44699_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44700(__this, method) (( Object_t * (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44701_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44702(__this, method) (( bool (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44703_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44704(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7058 *, KeyValuePair_2_t7059 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44705_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44706(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7058 *, KeyValuePair_2_t7059 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44707_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44708(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7058 *, KeyValuePair_2U5BU5D_t7910*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44709_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44710(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7058 *, KeyValuePair_2_t7059 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44711_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44712(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7058 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44713_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44714(__this, method) (( Object_t * (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44715_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44716(__this, method) (( Object_t* (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44717_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44718(__this, method) (( Object_t * (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44719_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Count()
#define Dictionary_2_get_Count_m44720(__this, method) (( int32_t (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_get_Count_m44721_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Item(TKey)
#define Dictionary_2_get_Item_m44722(__this, ___key, method) (( float (*) (Dictionary_2_t7058 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m44723_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m44724(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7058 *, String_t*, float, const MethodInfo*))Dictionary_2_set_Item_m44725_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m44726(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7058 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44727_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m44728(__this, ___size, method) (( void (*) (Dictionary_2_t7058 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44729_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m44730(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7058 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44731_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m44732(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7059  (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_make_pair_m44733_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Single>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m44734(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_pick_key_m44735_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m44736(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_pick_value_m44737_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m44738(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7058 *, KeyValuePair_2U5BU5D_t7910*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44739_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Resize()
#define Dictionary_2_Resize_m44740(__this, method) (( void (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_Resize_m44741_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Add(TKey,TValue)
#define Dictionary_2_Add_m44742(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7058 *, String_t*, float, const MethodInfo*))Dictionary_2_Add_m44743_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Clear()
#define Dictionary_2_Clear_m44744(__this, method) (( void (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_Clear_m44745_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m44746(__this, ___key, method) (( bool (*) (Dictionary_2_t7058 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m44747_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m44748(__this, ___value, method) (( bool (*) (Dictionary_2_t7058 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m44749_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m44750(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7058 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m44751_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m44752(__this, ___sender, method) (( void (*) (Dictionary_2_t7058 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44753_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::Remove(TKey)
#define Dictionary_2_Remove_m44754(__this, ___key, method) (( bool (*) (Dictionary_2_t7058 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m44755_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m44756(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7058 *, String_t*, float*, const MethodInfo*))Dictionary_2_TryGetValue_m44757_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Keys()
#define Dictionary_2_get_Keys_m44758(__this, method) (( KeyCollection_t7060 * (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_get_Keys_m44759_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Values()
#define Dictionary_2_get_Values_m44760(__this, method) (( ValueCollection_t7061 * (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_get_Values_m44761_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Single>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m44762(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7058 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44763_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m44764(__this, ___value, method) (( float (*) (Dictionary_2_t7058 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44765_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m44766(__this, ___pair, method) (( bool (*) (Dictionary_2_t7058 *, KeyValuePair_2_t7059 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44767_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m44768(__this, method) (( Enumerator_t7062  (*) (Dictionary_2_t7058 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44769_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Single>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m44770(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44771_gshared)(__this /* static, unused */, ___key, ___value, method)
