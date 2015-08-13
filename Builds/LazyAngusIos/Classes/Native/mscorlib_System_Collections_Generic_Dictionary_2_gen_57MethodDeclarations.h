#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t7054;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8932;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_t7056;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_t7057;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5379;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6999;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7906;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7278;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
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
#define Dictionary_2__ctor_m44582(__this, method) (( void (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2__ctor_m44583_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44584(__this, ___comparer, method) (( void (*) (Dictionary_2_t7054 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44585_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m44586(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7054 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44587_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Int32)
#define Dictionary_2__ctor_m44588(__this, ___capacity, method) (( void (*) (Dictionary_2_t7054 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44590(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7054 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44591_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m44592(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7054 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m44593_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44594(__this, method) (( Object_t* (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44595_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44596(__this, method) (( Object_t* (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44597_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44598(__this, method) (( Object_t * (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44599_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44600(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7054 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44601_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44602(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7054 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44603_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m44604(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7054 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44605_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m44606(__this, ___key, method) (( bool (*) (Dictionary_2_t7054 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44607_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m44608(__this, ___key, method) (( void (*) (Dictionary_2_t7054 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44609_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44610(__this, method) (( bool (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44611_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44612(__this, method) (( Object_t * (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44613_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44614(__this, method) (( bool (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44615_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44616(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7054 *, KeyValuePair_2_t7055 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44617_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44618(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7054 *, KeyValuePair_2_t7055 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44619_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44620(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7054 *, KeyValuePair_2U5BU5D_t7906*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44621_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44622(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7054 *, KeyValuePair_2_t7055 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44623_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44624(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7054 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44625_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44626(__this, method) (( Object_t * (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44627_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44628(__this, method) (( Object_t* (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44629_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44630(__this, method) (( Object_t * (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Count()
#define Dictionary_2_get_Count_m44632(__this, method) (( int32_t (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_get_Count_m44633_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Item(TKey)
#define Dictionary_2_get_Item_m44634(__this, ___key, method) (( float (*) (Dictionary_2_t7054 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m44635_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m44636(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7054 *, String_t*, float, const MethodInfo*))Dictionary_2_set_Item_m44637_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m44638(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7054 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44639_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m44640(__this, ___size, method) (( void (*) (Dictionary_2_t7054 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44641_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m44642(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7054 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44643_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m44644(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7055  (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_make_pair_m44645_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Single>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m44646(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_pick_key_m44647_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m44648(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_pick_value_m44649_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m44650(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7054 *, KeyValuePair_2U5BU5D_t7906*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44651_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Resize()
#define Dictionary_2_Resize_m44652(__this, method) (( void (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_Resize_m44653_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Add(TKey,TValue)
#define Dictionary_2_Add_m44654(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7054 *, String_t*, float, const MethodInfo*))Dictionary_2_Add_m44655_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Clear()
#define Dictionary_2_Clear_m44656(__this, method) (( void (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_Clear_m44657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m44658(__this, ___key, method) (( bool (*) (Dictionary_2_t7054 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m44659_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m44660(__this, ___value, method) (( bool (*) (Dictionary_2_t7054 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m44661_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m44662(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7054 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m44663_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m44664(__this, ___sender, method) (( void (*) (Dictionary_2_t7054 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44665_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::Remove(TKey)
#define Dictionary_2_Remove_m44666(__this, ___key, method) (( bool (*) (Dictionary_2_t7054 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m44667_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m44668(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7054 *, String_t*, float*, const MethodInfo*))Dictionary_2_TryGetValue_m44669_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Keys()
#define Dictionary_2_get_Keys_m44670(__this, method) (( KeyCollection_t7056 * (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_get_Keys_m44671_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Values()
#define Dictionary_2_get_Values_m44672(__this, method) (( ValueCollection_t7057 * (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_get_Values_m44673_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Single>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m44674(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7054 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44675_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m44676(__this, ___value, method) (( float (*) (Dictionary_2_t7054 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44677_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m44678(__this, ___pair, method) (( bool (*) (Dictionary_2_t7054 *, KeyValuePair_2_t7055 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44679_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m44680(__this, method) (( Enumerator_t7058  (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44681_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Single>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m44682(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44683_gshared)(__this /* static, unused */, ___key, ___value, method)
