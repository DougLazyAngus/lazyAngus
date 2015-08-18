#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8340;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9072;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8706;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t8341;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
struct ValueCollection_t8345;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6006;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t8336;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9572;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
struct IEnumerator_1_t9573;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_131.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__62.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m59660_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m59660(__this, method) (( void (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2__ctor_m59660_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m59661_gshared (Dictionary_2_t8340 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m59661(__this, ___comparer, method) (( void (*) (Dictionary_2_t8340 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m59661_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m59662_gshared (Dictionary_2_t8340 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m59662(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8340 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m59662_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m59663_gshared (Dictionary_2_t8340 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m59663(__this, ___capacity, method) (( void (*) (Dictionary_2_t8340 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m59663_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m59664_gshared (Dictionary_2_t8340 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m59664(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8340 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m59664_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m59665_gshared (Dictionary_2_t8340 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m59665(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8340 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m59665_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59666_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59666(__this, method) (( Object_t* (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59666_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59667_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59667(__this, method) (( Object_t* (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59667_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m59668_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m59668(__this, method) (( Object_t * (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m59668_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m59669_gshared (Dictionary_2_t8340 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m59669(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8340 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m59669_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m59670_gshared (Dictionary_2_t8340 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m59670(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8340 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m59670_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m59671_gshared (Dictionary_2_t8340 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m59671(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8340 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m59671_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m59672_gshared (Dictionary_2_t8340 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m59672(__this, ___key, method) (( bool (*) (Dictionary_2_t8340 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m59672_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m59673_gshared (Dictionary_2_t8340 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m59673(__this, ___key, method) (( void (*) (Dictionary_2_t8340 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m59673_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59674_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59674(__this, method) (( bool (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59674_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59675_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59675(__this, method) (( Object_t * (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59675_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59676_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59676(__this, method) (( bool (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59676_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m59677_gshared (Dictionary_2_t8340 * __this, KeyValuePair_2_t8337  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m59677(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8340 *, KeyValuePair_2_t8337 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m59677_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m59678_gshared (Dictionary_2_t8340 * __this, KeyValuePair_2_t8337  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m59678(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8340 *, KeyValuePair_2_t8337 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m59678_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59679_gshared (Dictionary_2_t8340 * __this, KeyValuePair_2U5BU5D_t9572* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59679(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8340 *, KeyValuePair_2U5BU5D_t9572*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59679_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m59680_gshared (Dictionary_2_t8340 * __this, KeyValuePair_2_t8337  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m59680(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8340 *, KeyValuePair_2_t8337 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m59680_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m59681_gshared (Dictionary_2_t8340 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m59681(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8340 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m59681_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59682_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59682(__this, method) (( Object_t * (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59682_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59683_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59683(__this, method) (( Object_t* (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59683_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59684_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59684(__this, method) (( Object_t * (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59684_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m59685_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m59685(__this, method) (( int32_t (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_get_Count_m59685_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m59686_gshared (Dictionary_2_t8340 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m59686(__this, ___key, method) (( int32_t (*) (Dictionary_2_t8340 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m59686_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m59687_gshared (Dictionary_2_t8340 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m59687(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8340 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m59687_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m59688_gshared (Dictionary_2_t8340 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m59688(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8340 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m59688_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m59689_gshared (Dictionary_2_t8340 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m59689(__this, ___size, method) (( void (*) (Dictionary_2_t8340 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m59689_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m59690_gshared (Dictionary_2_t8340 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m59690(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8340 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m59690_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8337  Dictionary_2_make_pair_m59691_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m59691(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8337  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m59691_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m59692_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m59692(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m59692_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m59693_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m59693(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m59693_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m59694_gshared (Dictionary_2_t8340 * __this, KeyValuePair_2U5BU5D_t9572* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m59694(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8340 *, KeyValuePair_2U5BU5D_t9572*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m59694_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m59695_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m59695(__this, method) (( void (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_Resize_m59695_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m59696_gshared (Dictionary_2_t8340 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m59696(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8340 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_Add_m59696_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m59697_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m59697(__this, method) (( void (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_Clear_m59697_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m59698_gshared (Dictionary_2_t8340 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m59698(__this, ___key, method) (( bool (*) (Dictionary_2_t8340 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m59698_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m59699_gshared (Dictionary_2_t8340 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m59699(__this, ___value, method) (( bool (*) (Dictionary_2_t8340 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m59699_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m59700_gshared (Dictionary_2_t8340 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m59700(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8340 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m59700_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m59701_gshared (Dictionary_2_t8340 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m59701(__this, ___sender, method) (( void (*) (Dictionary_2_t8340 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m59701_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m59702_gshared (Dictionary_2_t8340 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m59702(__this, ___key, method) (( bool (*) (Dictionary_2_t8340 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m59702_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m59703_gshared (Dictionary_2_t8340 * __this, int64_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m59703(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8340 *, int64_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m59703_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Keys()
extern "C" KeyCollection_t8341 * Dictionary_2_get_Keys_m59704_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m59704(__this, method) (( KeyCollection_t8341 * (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_get_Keys_m59704_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Values()
extern "C" ValueCollection_t8345 * Dictionary_2_get_Values_m59705_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m59705(__this, method) (( ValueCollection_t8345 * (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_get_Values_m59705_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m59706_gshared (Dictionary_2_t8340 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m59706(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8340 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m59706_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m59707_gshared (Dictionary_2_t8340 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m59707(__this, ___value, method) (( int32_t (*) (Dictionary_2_t8340 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m59707_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m59708_gshared (Dictionary_2_t8340 * __this, KeyValuePair_2_t8337  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m59708(__this, ___pair, method) (( bool (*) (Dictionary_2_t8340 *, KeyValuePair_2_t8337 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m59708_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8343  Dictionary_2_GetEnumerator_m59709_gshared (Dictionary_2_t8340 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m59709(__this, method) (( Enumerator_t8343  (*) (Dictionary_2_t8340 *, const MethodInfo*))Dictionary_2_GetEnumerator_m59709_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m59710_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m59710(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m59710_gshared)(__this /* static, unused */, ___key, ___value, method)
