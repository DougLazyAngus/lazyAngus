#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_t1445;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t9093;
// System.Collections.Generic.ICollection`1<System.Func`3<System.Object,System.Object,System.Object>>
struct ICollection_1_t9094;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1195;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1442;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct KeyCollection_t6082;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct ValueCollection_t6083;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IEqualityComparer_1_t6079;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct IDictionary_2_t1197;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t9095;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>>
struct IEnumerator_1_t9096;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_41.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__36.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m7400(__this, method) (( void (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2__ctor_m21817_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31938(__this, ___comparer, method) (( void (*) (Dictionary_2_t1445 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21819_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m31939(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1445 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21821_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m31940(__this, ___capacity, method) (( void (*) (Dictionary_2_t1445 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21823_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31941(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1445 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21825_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m31942(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1445 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m21827_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31943(__this, method) (( Object_t* (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21829_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31944(__this, method) (( Object_t* (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21831_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31945(__this, method) (( Object_t * (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21833_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31946(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1445 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21835_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31947(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1445 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21837_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m31948(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1445 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21839_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m31949(__this, ___key, method) (( bool (*) (Dictionary_2_t1445 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21841_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m31950(__this, ___key, method) (( void (*) (Dictionary_2_t1445 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21843_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31951(__this, method) (( bool (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21845_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31952(__this, method) (( Object_t * (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31953(__this, method) (( bool (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21849_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31954(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1445 *, KeyValuePair_2_t6081 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21851_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31955(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1445 *, KeyValuePair_2_t6081 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21853_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31956(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1445 *, KeyValuePair_2U5BU5D_t9095*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21855_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31957(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1445 *, KeyValuePair_2_t6081 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21857_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31958(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1445 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21859_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31959(__this, method) (( Object_t * (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21861_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31960(__this, method) (( Object_t* (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21863_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31961(__this, method) (( Object_t * (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21865_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Count()
#define Dictionary_2_get_Count_m31962(__this, method) (( int32_t (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_get_Count_m21867_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Item(TKey)
#define Dictionary_2_get_Item_m31963(__this, ___key, method) (( Func_3_t1195 * (*) (Dictionary_2_t1445 *, Tuple_2_t1442 *, const MethodInfo*))Dictionary_2_get_Item_m21869_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m31964(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1445 *, Tuple_2_t1442 *, Func_3_t1195 *, const MethodInfo*))Dictionary_2_set_Item_m21871_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m31965(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1445 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21873_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m31966(__this, ___size, method) (( void (*) (Dictionary_2_t1445 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21875_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m31967(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1445 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21877_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m31968(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6081  (*) (Object_t * /* static, unused */, Tuple_2_t1442 *, Func_3_t1195 *, const MethodInfo*))Dictionary_2_make_pair_m21879_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m31969(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1442 * (*) (Object_t * /* static, unused */, Tuple_2_t1442 *, Func_3_t1195 *, const MethodInfo*))Dictionary_2_pick_key_m21881_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m31970(__this /* static, unused */, ___key, ___value, method) (( Func_3_t1195 * (*) (Object_t * /* static, unused */, Tuple_2_t1442 *, Func_3_t1195 *, const MethodInfo*))Dictionary_2_pick_value_m21883_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m31971(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1445 *, KeyValuePair_2U5BU5D_t9095*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21885_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Resize()
#define Dictionary_2_Resize_m31972(__this, method) (( void (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_Resize_m21887_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Add(TKey,TValue)
#define Dictionary_2_Add_m31973(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1445 *, Tuple_2_t1442 *, Func_3_t1195 *, const MethodInfo*))Dictionary_2_Add_m21889_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Clear()
#define Dictionary_2_Clear_m31974(__this, method) (( void (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_Clear_m21891_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m31975(__this, ___key, method) (( bool (*) (Dictionary_2_t1445 *, Tuple_2_t1442 *, const MethodInfo*))Dictionary_2_ContainsKey_m21893_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m31976(__this, ___value, method) (( bool (*) (Dictionary_2_t1445 *, Func_3_t1195 *, const MethodInfo*))Dictionary_2_ContainsValue_m21895_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m31977(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1445 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m21897_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m31978(__this, ___sender, method) (( void (*) (Dictionary_2_t1445 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21899_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Remove(TKey)
#define Dictionary_2_Remove_m31979(__this, ___key, method) (( bool (*) (Dictionary_2_t1445 *, Tuple_2_t1442 *, const MethodInfo*))Dictionary_2_Remove_m21901_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m31980(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1445 *, Tuple_2_t1442 *, Func_3_t1195 **, const MethodInfo*))Dictionary_2_TryGetValue_m21903_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Keys()
#define Dictionary_2_get_Keys_m31981(__this, method) (( KeyCollection_t6082 * (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_get_Keys_m21904_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Values()
#define Dictionary_2_get_Values_m31982(__this, method) (( ValueCollection_t6083 * (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_get_Values_m21906_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m31983(__this, ___key, method) (( Tuple_2_t1442 * (*) (Dictionary_2_t1445 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21908_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m31984(__this, ___value, method) (( Func_3_t1195 * (*) (Dictionary_2_t1445 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21910_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m31985(__this, ___pair, method) (( bool (*) (Dictionary_2_t1445 *, KeyValuePair_2_t6081 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21912_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m31986(__this, method) (( Enumerator_t6084  (*) (Dictionary_2_t1445 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21913_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m31987(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, Tuple_2_t1442 *, Func_3_t1195 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21915_gshared)(__this /* static, unused */, ___key, ___value, method)
