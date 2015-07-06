#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1150;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4158;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1211;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t3359;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t3363;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3354;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t4163;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t4164;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t4165;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m6467_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m6467(__this, method) (( void (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2__ctor_m6467_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17652_gshared (Dictionary_2_t1150 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17652(__this, ___comparer, method) (( void (*) (Dictionary_2_t1150 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17652_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17654_gshared (Dictionary_2_t1150 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17654(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1150 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17654_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17656_gshared (Dictionary_2_t1150 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17656(__this, ___capacity, method) (( void (*) (Dictionary_2_t1150 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17656_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17658_gshared (Dictionary_2_t1150 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17658(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1150 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17658_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17660_gshared (Dictionary_2_t1150 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17660(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1150 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m17660_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17662_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17662(__this, method) (( Object_t* (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17662_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17664_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17664(__this, method) (( Object_t* (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17664_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m17666_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m17666(__this, method) (( Object_t * (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17666_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17668_gshared (Dictionary_2_t1150 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17668(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1150 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17668_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17670_gshared (Dictionary_2_t1150 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17670(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1150 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17670_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17672_gshared (Dictionary_2_t1150 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17672(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1150 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17672_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17674_gshared (Dictionary_2_t1150 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17674(__this, ___key, method) (( bool (*) (Dictionary_2_t1150 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17674_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17676_gshared (Dictionary_2_t1150 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17676(__this, ___key, method) (( void (*) (Dictionary_2_t1150 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17676_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17678_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17678(__this, method) (( bool (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17678_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17680_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17680(__this, method) (( Object_t * (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17680_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17682_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17682(__this, method) (( bool (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17682_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17684_gshared (Dictionary_2_t1150 * __this, KeyValuePair_2_t3357  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17684(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1150 *, KeyValuePair_2_t3357 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17684_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17686_gshared (Dictionary_2_t1150 * __this, KeyValuePair_2_t3357  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17686(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1150 *, KeyValuePair_2_t3357 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17686_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17688_gshared (Dictionary_2_t1150 * __this, KeyValuePair_2U5BU5D_t4164* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17688(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1150 *, KeyValuePair_2U5BU5D_t4164*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17688_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17690_gshared (Dictionary_2_t1150 * __this, KeyValuePair_2_t3357  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17690(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1150 *, KeyValuePair_2_t3357 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17690_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17692_gshared (Dictionary_2_t1150 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17692(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1150 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17692_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17694_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17694(__this, method) (( Object_t * (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17694_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17696_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17696(__this, method) (( Object_t* (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17696_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17698_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17698(__this, method) (( Object_t * (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17698_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17700_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17700(__this, method) (( int32_t (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_get_Count_m17700_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m17702_gshared (Dictionary_2_t1150 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17702(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1150 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17702_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17704_gshared (Dictionary_2_t1150 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17704(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1150 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m17704_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17706_gshared (Dictionary_2_t1150 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17706(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1150 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17706_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17708_gshared (Dictionary_2_t1150 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17708(__this, ___size, method) (( void (*) (Dictionary_2_t1150 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17708_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17710_gshared (Dictionary_2_t1150 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17710(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1150 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17710_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3357  Dictionary_2_make_pair_m17712_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17712(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3357  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m17712_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m17714_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17714(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m17714_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m17716_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17716(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m17716_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17718_gshared (Dictionary_2_t1150 * __this, KeyValuePair_2U5BU5D_t4164* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17718(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1150 *, KeyValuePair_2U5BU5D_t4164*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17718_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m17720_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17720(__this, method) (( void (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_Resize_m17720_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17722_gshared (Dictionary_2_t1150 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17722(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1150 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m17722_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m17724_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17724(__this, method) (( void (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_Clear_m17724_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17726_gshared (Dictionary_2_t1150 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17726(__this, ___key, method) (( bool (*) (Dictionary_2_t1150 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17726_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17728_gshared (Dictionary_2_t1150 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17728(__this, ___value, method) (( bool (*) (Dictionary_2_t1150 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m17728_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17730_gshared (Dictionary_2_t1150 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17730(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1150 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m17730_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17732_gshared (Dictionary_2_t1150 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17732(__this, ___sender, method) (( void (*) (Dictionary_2_t1150 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17732_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17734_gshared (Dictionary_2_t1150 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17734(__this, ___key, method) (( bool (*) (Dictionary_2_t1150 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17734_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17736_gshared (Dictionary_2_t1150 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17736(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1150 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m17736_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t3359 * Dictionary_2_get_Keys_m17737_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17737(__this, method) (( KeyCollection_t3359 * (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_get_Keys_m17737_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t3363 * Dictionary_2_get_Values_m17739_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17739(__this, method) (( ValueCollection_t3363 * (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_get_Values_m17739_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m17741_gshared (Dictionary_2_t1150 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17741(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1150 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17741_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m17743_gshared (Dictionary_2_t1150 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17743(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1150 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17743_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17745_gshared (Dictionary_2_t1150 * __this, KeyValuePair_2_t3357  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17745(__this, ___pair, method) (( bool (*) (Dictionary_2_t1150 *, KeyValuePair_2_t3357 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17745_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t3361  Dictionary_2_GetEnumerator_m17746_gshared (Dictionary_2_t1150 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17746(__this, method) (( Enumerator_t3361  (*) (Dictionary_2_t1150 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17746_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1685  Dictionary_2_U3CCopyToU3Em__0_m17748_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17748(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17748_gshared)(__this /* static, unused */, ___key, ___value, method)
