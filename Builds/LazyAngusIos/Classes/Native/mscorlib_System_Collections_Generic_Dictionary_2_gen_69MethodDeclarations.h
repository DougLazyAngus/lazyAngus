#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8375;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1171;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8982;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t8376;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t8380;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1135;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t9524;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7615;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7177;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3912;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__64.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m60363_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m60363(__this, method) (( void (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2__ctor_m60363_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m60365_gshared (Dictionary_2_t8375 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m60365(__this, ___comparer, method) (( void (*) (Dictionary_2_t8375 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60365_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m60367_gshared (Dictionary_2_t8375 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m60367(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8375 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60367_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m60369_gshared (Dictionary_2_t8375 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m60369(__this, ___capacity, method) (( void (*) (Dictionary_2_t8375 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m60369_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m60371_gshared (Dictionary_2_t8375 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m60371(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8375 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60371_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m60373_gshared (Dictionary_2_t8375 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m60373(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8375 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2__ctor_m60373_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60375_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60375(__this, method) (( Object_t* (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60375_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60377_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60377(__this, method) (( Object_t* (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60377_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m60379_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m60379(__this, method) (( Object_t * (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m60379_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m60381_gshared (Dictionary_2_t8375 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m60381(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8375 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m60381_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m60383_gshared (Dictionary_2_t8375 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m60383(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8375 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m60383_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m60385_gshared (Dictionary_2_t8375 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m60385(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8375 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m60385_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m60387_gshared (Dictionary_2_t8375 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m60387(__this, ___key, method) (( bool (*) (Dictionary_2_t8375 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m60387_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m60389_gshared (Dictionary_2_t8375 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m60389(__this, ___key, method) (( void (*) (Dictionary_2_t8375 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m60389_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60391_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60391(__this, method) (( bool (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60391_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60393_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60393(__this, method) (( Object_t * (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60395_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60395(__this, method) (( bool (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60395_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60397_gshared (Dictionary_2_t8375 * __this, KeyValuePair_2_t7172  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60397(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8375 *, KeyValuePair_2_t7172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60397_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60399_gshared (Dictionary_2_t8375 * __this, KeyValuePair_2_t7172  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60399(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8375 *, KeyValuePair_2_t7172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60399_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60401_gshared (Dictionary_2_t8375 * __this, KeyValuePair_2U5BU5D_t7615* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60401(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8375 *, KeyValuePair_2U5BU5D_t7615*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60401_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60403_gshared (Dictionary_2_t8375 * __this, KeyValuePair_2_t7172  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60403(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8375 *, KeyValuePair_2_t7172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60403_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m60405_gshared (Dictionary_2_t8375 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m60405(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8375 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m60405_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60407_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60407(__this, method) (( Object_t * (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60407_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60409_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60409(__this, method) (( Object_t* (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60409_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60411_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60411(__this, method) (( Object_t * (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60411_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m60413_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m60413(__this, method) (( int32_t (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_get_Count_m60413_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m60415_gshared (Dictionary_2_t8375 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m60415(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8375 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m60415_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m60417_gshared (Dictionary_2_t8375 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m60417(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8375 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m60417_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m60419_gshared (Dictionary_2_t8375 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m60419(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8375 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m60419_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m60421_gshared (Dictionary_2_t8375 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m60421(__this, ___size, method) (( void (*) (Dictionary_2_t8375 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m60421_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m60423_gshared (Dictionary_2_t8375 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m60423(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8375 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m60423_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7172  Dictionary_2_make_pair_m60425_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m60425(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7172  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m60425_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m60427_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m60427(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m60427_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m60429_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m60429(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m60429_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m60431_gshared (Dictionary_2_t8375 * __this, KeyValuePair_2U5BU5D_t7615* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m60431(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8375 *, KeyValuePair_2U5BU5D_t7615*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m60431_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m60433_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m60433(__this, method) (( void (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_Resize_m60433_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m60435_gshared (Dictionary_2_t8375 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m60435(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8375 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m60435_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m60437_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m60437(__this, method) (( void (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_Clear_m60437_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m60439_gshared (Dictionary_2_t8375 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m60439(__this, ___key, method) (( bool (*) (Dictionary_2_t8375 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m60439_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m60441_gshared (Dictionary_2_t8375 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m60441(__this, ___value, method) (( bool (*) (Dictionary_2_t8375 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m60441_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m60443_gshared (Dictionary_2_t8375 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m60443(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8375 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2_GetObjectData_m60443_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m60445_gshared (Dictionary_2_t8375 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m60445(__this, ___sender, method) (( void (*) (Dictionary_2_t8375 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m60445_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m60447_gshared (Dictionary_2_t8375 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m60447(__this, ___key, method) (( bool (*) (Dictionary_2_t8375 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m60447_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m60449_gshared (Dictionary_2_t8375 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m60449(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8375 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m60449_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t8376 * Dictionary_2_get_Keys_m60451_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m60451(__this, method) (( KeyCollection_t8376 * (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_get_Keys_m60451_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t8380 * Dictionary_2_get_Values_m60453_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m60453(__this, method) (( ValueCollection_t8380 * (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_get_Values_m60453_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m60455_gshared (Dictionary_2_t8375 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m60455(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8375 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m60455_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m60457_gshared (Dictionary_2_t8375 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m60457(__this, ___value, method) (( int64_t (*) (Dictionary_2_t8375 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m60457_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m60459_gshared (Dictionary_2_t8375 * __this, KeyValuePair_2_t7172  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m60459(__this, ___pair, method) (( bool (*) (Dictionary_2_t8375 *, KeyValuePair_2_t7172 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m60459_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t8378  Dictionary_2_GetEnumerator_m60461_gshared (Dictionary_2_t8375 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m60461(__this, method) (( Enumerator_t8378  (*) (Dictionary_2_t8375 *, const MethodInfo*))Dictionary_2_GetEnumerator_m60461_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2089  Dictionary_2_U3CCopyToU3Em__0_m60463_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m60463(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2089  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m60463_gshared)(__this /* static, unused */, ___key, ___value, method)
