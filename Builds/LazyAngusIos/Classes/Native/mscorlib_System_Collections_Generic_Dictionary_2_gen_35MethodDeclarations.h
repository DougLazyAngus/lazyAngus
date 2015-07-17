#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3391;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1290;
// System.Collections.ICollection
struct ICollection_t651;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t3395;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t3399;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3389;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t4227;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1299;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4025;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3406;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1941;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m17606_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17606(__this, method) (( void (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2__ctor_m17606_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17608_gshared (Dictionary_2_t3391 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17608(__this, ___comparer, method) (( void (*) (Dictionary_2_t3391 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17608_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17610_gshared (Dictionary_2_t3391 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17610(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3391 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17610_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17612_gshared (Dictionary_2_t3391 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17612(__this, ___capacity, method) (( void (*) (Dictionary_2_t3391 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17612_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17614_gshared (Dictionary_2_t3391 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17614(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3391 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17614_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17616_gshared (Dictionary_2_t3391 * __this, SerializationInfo_t1299 * ___info, StreamingContext_t1300  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17616(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3391 *, SerializationInfo_t1299 *, StreamingContext_t1300 , const MethodInfo*))Dictionary_2__ctor_m17616_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17618_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17618(__this, method) (( Object_t* (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17618_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17620_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17620(__this, method) (( Object_t* (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17620_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m17622_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m17622(__this, method) (( Object_t * (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17622_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17624_gshared (Dictionary_2_t3391 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17624(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3391 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17624_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17626_gshared (Dictionary_2_t3391 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17626(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3391 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17626_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17628_gshared (Dictionary_2_t3391 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17628(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3391 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17628_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17630_gshared (Dictionary_2_t3391 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17630(__this, ___key, method) (( bool (*) (Dictionary_2_t3391 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17630_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17632_gshared (Dictionary_2_t3391 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17632(__this, ___key, method) (( void (*) (Dictionary_2_t3391 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17632_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17634_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17634(__this, method) (( bool (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17634_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17636_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17636(__this, method) (( Object_t * (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17636_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17638_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17638(__this, method) (( bool (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17638_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17640_gshared (Dictionary_2_t3391 * __this, KeyValuePair_2_t40  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17640(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3391 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17640_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17642_gshared (Dictionary_2_t3391 * __this, KeyValuePair_2_t40  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17642(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3391 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17642_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17644_gshared (Dictionary_2_t3391 * __this, KeyValuePair_2U5BU5D_t4025* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17644(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3391 *, KeyValuePair_2U5BU5D_t4025*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17644_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17646_gshared (Dictionary_2_t3391 * __this, KeyValuePair_2_t40  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17646(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3391 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17646_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17648_gshared (Dictionary_2_t3391 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17648(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3391 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17648_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17650_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17650(__this, method) (( Object_t * (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17650_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17652_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17652(__this, method) (( Object_t* (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17652_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17654_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17654(__this, method) (( Object_t * (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17654_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17656_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17656(__this, method) (( int32_t (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_get_Count_m17656_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m17658_gshared (Dictionary_2_t3391 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17658(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3391 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17658_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17660_gshared (Dictionary_2_t3391 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17660(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3391 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m17660_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17662_gshared (Dictionary_2_t3391 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17662(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3391 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17662_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17664_gshared (Dictionary_2_t3391 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17664(__this, ___size, method) (( void (*) (Dictionary_2_t3391 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17664_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17666_gshared (Dictionary_2_t3391 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17666(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3391 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17666_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t40  Dictionary_2_make_pair_m17668_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17668(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t40  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m17668_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m17670_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17670(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m17670_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m17672_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17672(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m17672_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17674_gshared (Dictionary_2_t3391 * __this, KeyValuePair_2U5BU5D_t4025* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17674(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3391 *, KeyValuePair_2U5BU5D_t4025*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17674_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m17676_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17676(__this, method) (( void (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_Resize_m17676_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17678_gshared (Dictionary_2_t3391 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17678(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3391 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m17678_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m17680_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17680(__this, method) (( void (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_Clear_m17680_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17682_gshared (Dictionary_2_t3391 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17682(__this, ___key, method) (( bool (*) (Dictionary_2_t3391 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17682_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17684_gshared (Dictionary_2_t3391 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17684(__this, ___value, method) (( bool (*) (Dictionary_2_t3391 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m17684_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17686_gshared (Dictionary_2_t3391 * __this, SerializationInfo_t1299 * ___info, StreamingContext_t1300  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17686(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3391 *, SerializationInfo_t1299 *, StreamingContext_t1300 , const MethodInfo*))Dictionary_2_GetObjectData_m17686_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17688_gshared (Dictionary_2_t3391 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17688(__this, ___sender, method) (( void (*) (Dictionary_2_t3391 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17688_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17690_gshared (Dictionary_2_t3391 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17690(__this, ___key, method) (( bool (*) (Dictionary_2_t3391 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17690_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17692_gshared (Dictionary_2_t3391 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17692(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3391 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m17692_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t3395 * Dictionary_2_get_Keys_m17693_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17693(__this, method) (( KeyCollection_t3395 * (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_get_Keys_m17693_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t3399 * Dictionary_2_get_Values_m17695_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17695(__this, method) (( ValueCollection_t3399 * (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_get_Values_m17695_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17697_gshared (Dictionary_2_t3391 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17697(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3391 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17697_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m17699_gshared (Dictionary_2_t3391 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17699(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3391 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17699_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17701_gshared (Dictionary_2_t3391 * __this, KeyValuePair_2_t40  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17701(__this, ___pair, method) (( bool (*) (Dictionary_2_t3391 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17701_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t3397  Dictionary_2_GetEnumerator_m17702_gshared (Dictionary_2_t3391 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17702(__this, method) (( Enumerator_t3397  (*) (Dictionary_2_t3391 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17702_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2179  Dictionary_2_U3CCopyToU3Em__0_m17704_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17704(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2179  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17704_gshared)(__this /* static, unused */, ___key, ___value, method)
