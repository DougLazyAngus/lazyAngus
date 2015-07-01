#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3863;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t4488;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1189;
// System.Collections.ICollection
struct ICollection_t547;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3867;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t3871;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t3861;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t4489;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1198;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t4490;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t4491;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1396;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__31.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m25584_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m25584(__this, method) (( void (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2__ctor_m25584_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25586_gshared (Dictionary_2_t3863 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25586(__this, ___comparer, method) (( void (*) (Dictionary_2_t3863 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25586_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25588_gshared (Dictionary_2_t3863 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m25588(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3863 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25588_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25590_gshared (Dictionary_2_t3863 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25590(__this, ___capacity, method) (( void (*) (Dictionary_2_t3863 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25590_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25592_gshared (Dictionary_2_t3863 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25592(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3863 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25592_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25594_gshared (Dictionary_2_t3863 * __this, SerializationInfo_t1198 * ___info, StreamingContext_t1199  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25594(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3863 *, SerializationInfo_t1198 *, StreamingContext_t1199 , const MethodInfo*))Dictionary_2__ctor_m25594_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25596_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25596(__this, method) (( Object_t* (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25596_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25598_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25598(__this, method) (( Object_t* (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25598_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25600_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25600(__this, method) (( Object_t * (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25600_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25602_gshared (Dictionary_2_t3863 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25602(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3863 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25602_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25604_gshared (Dictionary_2_t3863 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25604(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3863 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25604_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25606_gshared (Dictionary_2_t3863 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25606(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3863 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25606_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25608_gshared (Dictionary_2_t3863 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25608(__this, ___key, method) (( bool (*) (Dictionary_2_t3863 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25608_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25610_gshared (Dictionary_2_t3863 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25610(__this, ___key, method) (( void (*) (Dictionary_2_t3863 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25610_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25612_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25612(__this, method) (( bool (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25612_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25614_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25614(__this, method) (( Object_t * (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25614_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25616_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25616(__this, method) (( bool (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25616_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25618_gshared (Dictionary_2_t3863 * __this, KeyValuePair_2_t3864  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25618(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3863 *, KeyValuePair_2_t3864 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25618_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25620_gshared (Dictionary_2_t3863 * __this, KeyValuePair_2_t3864  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25620(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3863 *, KeyValuePair_2_t3864 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25620_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25622_gshared (Dictionary_2_t3863 * __this, KeyValuePair_2U5BU5D_t4490* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25622(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3863 *, KeyValuePair_2U5BU5D_t4490*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25622_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25624_gshared (Dictionary_2_t3863 * __this, KeyValuePair_2_t3864  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25624(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3863 *, KeyValuePair_2_t3864 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25624_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25626_gshared (Dictionary_2_t3863 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25626(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3863 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25626_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25628_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25628(__this, method) (( Object_t * (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25628_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25630_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25630(__this, method) (( Object_t* (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25630_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25632_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25632(__this, method) (( Object_t * (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25632_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25634_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25634(__this, method) (( int32_t (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_get_Count_m25634_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m25636_gshared (Dictionary_2_t3863 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25636(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3863 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m25636_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25638_gshared (Dictionary_2_t3863 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25638(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3863 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m25638_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25640_gshared (Dictionary_2_t3863 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25640(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3863 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25640_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25642_gshared (Dictionary_2_t3863 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25642(__this, ___size, method) (( void (*) (Dictionary_2_t3863 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25642_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25644_gshared (Dictionary_2_t3863 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25644(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3863 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25644_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3864  Dictionary_2_make_pair_m25646_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25646(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3864  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m25646_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m25648_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25648(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m25648_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m25650_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25650(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m25650_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25652_gshared (Dictionary_2_t3863 * __this, KeyValuePair_2U5BU5D_t4490* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25652(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3863 *, KeyValuePair_2U5BU5D_t4490*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25652_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m25654_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25654(__this, method) (( void (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_Resize_m25654_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25656_gshared (Dictionary_2_t3863 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25656(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3863 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m25656_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m25658_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25658(__this, method) (( void (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_Clear_m25658_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25660_gshared (Dictionary_2_t3863 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25660(__this, ___key, method) (( bool (*) (Dictionary_2_t3863 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m25660_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25662_gshared (Dictionary_2_t3863 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25662(__this, ___value, method) (( bool (*) (Dictionary_2_t3863 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m25662_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25664_gshared (Dictionary_2_t3863 * __this, SerializationInfo_t1198 * ___info, StreamingContext_t1199  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25664(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3863 *, SerializationInfo_t1198 *, StreamingContext_t1199 , const MethodInfo*))Dictionary_2_GetObjectData_m25664_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25666_gshared (Dictionary_2_t3863 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25666(__this, ___sender, method) (( void (*) (Dictionary_2_t3863 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25666_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25668_gshared (Dictionary_2_t3863 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25668(__this, ___key, method) (( bool (*) (Dictionary_2_t3863 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m25668_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25670_gshared (Dictionary_2_t3863 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25670(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3863 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m25670_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3867 * Dictionary_2_get_Keys_m25672_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25672(__this, method) (( KeyCollection_t3867 * (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_get_Keys_m25672_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3871 * Dictionary_2_get_Values_m25674_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25674(__this, method) (( ValueCollection_t3871 * (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_get_Values_m25674_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m25676_gshared (Dictionary_2_t3863 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25676(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t3863 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25676_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m25678_gshared (Dictionary_2_t3863 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25678(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3863 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25678_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25680_gshared (Dictionary_2_t3863 * __this, KeyValuePair_2_t3864  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25680(__this, ___pair, method) (( bool (*) (Dictionary_2_t3863 *, KeyValuePair_2_t3864 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25680_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3869  Dictionary_2_GetEnumerator_m25682_gshared (Dictionary_2_t3863 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25682(__this, method) (( Enumerator_t3869  (*) (Dictionary_2_t3863 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25682_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1663  Dictionary_2_U3CCopyToU3Em__0_m25684_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m25684(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1663  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25684_gshared)(__this /* static, unused */, ___key, ___value, method)
