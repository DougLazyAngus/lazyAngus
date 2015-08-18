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
#define Dictionary_2__ctor_m44579(__this, method) (( void (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2__ctor_m44580_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44581(__this, ___comparer, method) (( void (*) (Dictionary_2_t7054 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44582_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m44583(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7054 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44584_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Int32)
#define Dictionary_2__ctor_m44585(__this, ___capacity, method) (( void (*) (Dictionary_2_t7054 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44586_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44587(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7054 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44588_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m44589(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7054 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m44590_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44591(__this, method) (( Object_t* (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44592_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44593(__this, method) (( Object_t* (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44594_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44595(__this, method) (( Object_t * (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44596_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44597(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7054 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44598_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44599(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7054 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44600_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m44601(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7054 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44602_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m44603(__this, ___key, method) (( bool (*) (Dictionary_2_t7054 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44604_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m44605(__this, ___key, method) (( void (*) (Dictionary_2_t7054 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44606_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44607(__this, method) (( bool (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44608_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44609(__this, method) (( Object_t * (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44610_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44611(__this, method) (( bool (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44612_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44613(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7054 *, KeyValuePair_2_t7055 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44614_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44615(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7054 *, KeyValuePair_2_t7055 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44616_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44617(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7054 *, KeyValuePair_2U5BU5D_t7906*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44618_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44619(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7054 *, KeyValuePair_2_t7055 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44620_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44621(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7054 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44622_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44623(__this, method) (( Object_t * (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44624_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44625(__this, method) (( Object_t* (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44626_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44627(__this, method) (( Object_t * (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44628_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Count()
#define Dictionary_2_get_Count_m44629(__this, method) (( int32_t (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_get_Count_m44630_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Item(TKey)
#define Dictionary_2_get_Item_m44631(__this, ___key, method) (( float (*) (Dictionary_2_t7054 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m44632_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m44633(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7054 *, String_t*, float, const MethodInfo*))Dictionary_2_set_Item_m44634_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m44635(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7054 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44636_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m44637(__this, ___size, method) (( void (*) (Dictionary_2_t7054 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44638_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m44639(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7054 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44640_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m44641(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7055  (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_make_pair_m44642_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Single>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m44643(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_pick_key_m44644_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m44645(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_pick_value_m44646_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m44647(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7054 *, KeyValuePair_2U5BU5D_t7906*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44648_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Resize()
#define Dictionary_2_Resize_m44649(__this, method) (( void (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_Resize_m44650_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Add(TKey,TValue)
#define Dictionary_2_Add_m44651(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7054 *, String_t*, float, const MethodInfo*))Dictionary_2_Add_m44652_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Clear()
#define Dictionary_2_Clear_m44653(__this, method) (( void (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_Clear_m44654_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m44655(__this, ___key, method) (( bool (*) (Dictionary_2_t7054 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m44656_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m44657(__this, ___value, method) (( bool (*) (Dictionary_2_t7054 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m44658_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m44659(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7054 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m44660_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m44661(__this, ___sender, method) (( void (*) (Dictionary_2_t7054 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44662_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::Remove(TKey)
#define Dictionary_2_Remove_m44663(__this, ___key, method) (( bool (*) (Dictionary_2_t7054 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m44664_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m44665(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7054 *, String_t*, float*, const MethodInfo*))Dictionary_2_TryGetValue_m44666_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Keys()
#define Dictionary_2_get_Keys_m44667(__this, method) (( KeyCollection_t7056 * (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_get_Keys_m44668_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Values()
#define Dictionary_2_get_Values_m44669(__this, method) (( ValueCollection_t7057 * (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_get_Values_m44670_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Single>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m44671(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7054 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44672_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m44673(__this, ___value, method) (( float (*) (Dictionary_2_t7054 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44674_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m44675(__this, ___pair, method) (( bool (*) (Dictionary_2_t7054 *, KeyValuePair_2_t7055 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44676_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m44677(__this, method) (( Enumerator_t7058  (*) (Dictionary_2_t7054 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44678_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Single>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m44679(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44680_gshared)(__this /* static, unused */, ___key, ___value, method)
