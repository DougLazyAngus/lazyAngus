#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct Dictionary_2_t85;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4158;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct ICollection_1_t4169;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t507;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct KeyCollection_t3381;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct ValueCollection_t3382;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3354;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct IDictionary_2_t4170;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>[]
struct KeyValuePair_2U5BU5D_t4171;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>>
struct IEnumerator_1_t4172;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29MethodDeclarations.h"
#define Dictionary_2__ctor_m2515(__this, method) (( void (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2__ctor_m6467_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17898(__this, ___comparer, method) (( void (*) (Dictionary_2_t85 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17652_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m17899(__this, ___dictionary, method) (( void (*) (Dictionary_2_t85 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17654_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m17900(__this, ___capacity, method) (( void (*) (Dictionary_2_t85 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17656_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17901(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t85 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17658_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17902(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t85 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m17660_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17903(__this, method) (( Object_t* (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17662_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17904(__this, method) (( Object_t* (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17664_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m17905(__this, method) (( Object_t * (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17666_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17906(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t85 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17668_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17907(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t85 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17670_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m17908(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t85 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17672_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m17909(__this, ___key, method) (( bool (*) (Dictionary_2_t85 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17674_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m17910(__this, ___key, method) (( void (*) (Dictionary_2_t85 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17676_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17911(__this, method) (( bool (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17678_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17912(__this, method) (( Object_t * (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17680_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17913(__this, method) (( bool (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17682_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17914(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t85 *, KeyValuePair_2_t3380 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17684_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17915(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t85 *, KeyValuePair_2_t3380 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17686_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17916(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t85 *, KeyValuePair_2U5BU5D_t4171*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17688_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17917(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t85 *, KeyValuePair_2_t3380 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17690_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17918(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t85 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17692_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17919(__this, method) (( Object_t * (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17694_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17920(__this, method) (( Object_t* (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17696_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17921(__this, method) (( Object_t * (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17698_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Count()
#define Dictionary_2_get_Count_m17922(__this, method) (( int32_t (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_get_Count_m17700_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(TKey)
#define Dictionary_2_get_Item_m17923(__this, ___key, method) (( List_1_t507 * (*) (Dictionary_2_t85 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17702_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m17924(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t85 *, int32_t, List_1_t507 *, const MethodInfo*))Dictionary_2_set_Item_m17704_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17925(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t85 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17706_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17926(__this, ___size, method) (( void (*) (Dictionary_2_t85 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17708_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17927(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t85 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17710_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17928(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3380  (*) (Object_t * /* static, unused */, int32_t, List_1_t507 *, const MethodInfo*))Dictionary_2_make_pair_m17712_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m17929(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, List_1_t507 *, const MethodInfo*))Dictionary_2_pick_key_m17714_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17930(__this /* static, unused */, ___key, ___value, method) (( List_1_t507 * (*) (Object_t * /* static, unused */, int32_t, List_1_t507 *, const MethodInfo*))Dictionary_2_pick_value_m17716_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17931(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t85 *, KeyValuePair_2U5BU5D_t4171*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17718_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Resize()
#define Dictionary_2_Resize_m17932(__this, method) (( void (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_Resize_m17720_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Add(TKey,TValue)
#define Dictionary_2_Add_m17933(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t85 *, int32_t, List_1_t507 *, const MethodInfo*))Dictionary_2_Add_m17722_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Clear()
#define Dictionary_2_Clear_m17934(__this, method) (( void (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_Clear_m17724_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m17935(__this, ___key, method) (( bool (*) (Dictionary_2_t85 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17726_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17936(__this, ___value, method) (( bool (*) (Dictionary_2_t85 *, List_1_t507 *, const MethodInfo*))Dictionary_2_ContainsValue_m17728_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m17937(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t85 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m17730_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m17938(__this, ___sender, method) (( void (*) (Dictionary_2_t85 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17732_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Remove(TKey)
#define Dictionary_2_Remove_m17939(__this, ___key, method) (( bool (*) (Dictionary_2_t85 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17734_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m17940(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t85 *, int32_t, List_1_t507 **, const MethodInfo*))Dictionary_2_TryGetValue_m17736_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Keys()
#define Dictionary_2_get_Keys_m17941(__this, method) (( KeyCollection_t3381 * (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_get_Keys_m17737_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Values()
#define Dictionary_2_get_Values_m17942(__this, method) (( ValueCollection_t3382 * (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_get_Values_m17739_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17943(__this, ___key, method) (( int32_t (*) (Dictionary_2_t85 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17741_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17944(__this, ___value, method) (( List_1_t507 * (*) (Dictionary_2_t85 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17743_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17945(__this, ___pair, method) (( bool (*) (Dictionary_2_t85 *, KeyValuePair_2_t3380 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17745_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m17946(__this, method) (( Enumerator_t3383  (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17746_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17947(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, int32_t, List_1_t507 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17748_gshared)(__this /* static, unused */, ___key, ___value, method)
