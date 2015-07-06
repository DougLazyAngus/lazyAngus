#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3887;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t4512;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1211;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3891;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t3895;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t3885;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t4513;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t4514;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t4515;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__31.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m25742_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m25742(__this, method) (( void (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2__ctor_m25742_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25744_gshared (Dictionary_2_t3887 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25744(__this, ___comparer, method) (( void (*) (Dictionary_2_t3887 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25744_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25746_gshared (Dictionary_2_t3887 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m25746(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3887 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25746_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25748_gshared (Dictionary_2_t3887 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25748(__this, ___capacity, method) (( void (*) (Dictionary_2_t3887 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25748_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25750_gshared (Dictionary_2_t3887 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25750(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3887 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25750_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25752_gshared (Dictionary_2_t3887 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25752(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3887 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m25752_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25754_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25754(__this, method) (( Object_t* (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25754_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25756_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25756(__this, method) (( Object_t* (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25756_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25758_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25758(__this, method) (( Object_t * (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25758_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25760_gshared (Dictionary_2_t3887 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25760(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3887 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25760_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25762_gshared (Dictionary_2_t3887 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25762(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3887 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25762_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25764_gshared (Dictionary_2_t3887 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25764(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3887 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25764_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25766_gshared (Dictionary_2_t3887 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25766(__this, ___key, method) (( bool (*) (Dictionary_2_t3887 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25766_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25768_gshared (Dictionary_2_t3887 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25768(__this, ___key, method) (( void (*) (Dictionary_2_t3887 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25768_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25770_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25770(__this, method) (( bool (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25772_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25772(__this, method) (( Object_t * (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25772_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25774_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25774(__this, method) (( bool (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25774_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25776_gshared (Dictionary_2_t3887 * __this, KeyValuePair_2_t3888  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25776(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3887 *, KeyValuePair_2_t3888 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25776_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25778_gshared (Dictionary_2_t3887 * __this, KeyValuePair_2_t3888  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25778(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3887 *, KeyValuePair_2_t3888 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25778_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25780_gshared (Dictionary_2_t3887 * __this, KeyValuePair_2U5BU5D_t4514* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25780(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3887 *, KeyValuePair_2U5BU5D_t4514*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25780_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25782_gshared (Dictionary_2_t3887 * __this, KeyValuePair_2_t3888  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25782(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3887 *, KeyValuePair_2_t3888 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25782_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25784_gshared (Dictionary_2_t3887 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25784(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3887 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25784_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25786_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25786(__this, method) (( Object_t * (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25786_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25788_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25788(__this, method) (( Object_t* (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25788_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25790_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25790(__this, method) (( Object_t * (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25790_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25792_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25792(__this, method) (( int32_t (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_get_Count_m25792_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m25794_gshared (Dictionary_2_t3887 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25794(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3887 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m25794_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25796_gshared (Dictionary_2_t3887 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25796(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3887 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m25796_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25798_gshared (Dictionary_2_t3887 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25798(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3887 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25798_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25800_gshared (Dictionary_2_t3887 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25800(__this, ___size, method) (( void (*) (Dictionary_2_t3887 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25800_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25802_gshared (Dictionary_2_t3887 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25802(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3887 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25802_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3888  Dictionary_2_make_pair_m25804_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25804(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3888  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m25804_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m25806_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25806(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m25806_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m25808_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25808(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m25808_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25810_gshared (Dictionary_2_t3887 * __this, KeyValuePair_2U5BU5D_t4514* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25810(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3887 *, KeyValuePair_2U5BU5D_t4514*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25810_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m25812_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25812(__this, method) (( void (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_Resize_m25812_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25814_gshared (Dictionary_2_t3887 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25814(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3887 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m25814_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m25816_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25816(__this, method) (( void (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_Clear_m25816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25818_gshared (Dictionary_2_t3887 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25818(__this, ___key, method) (( bool (*) (Dictionary_2_t3887 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m25818_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25820_gshared (Dictionary_2_t3887 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25820(__this, ___value, method) (( bool (*) (Dictionary_2_t3887 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m25820_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25822_gshared (Dictionary_2_t3887 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25822(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3887 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m25822_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25824_gshared (Dictionary_2_t3887 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25824(__this, ___sender, method) (( void (*) (Dictionary_2_t3887 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25824_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25826_gshared (Dictionary_2_t3887 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25826(__this, ___key, method) (( bool (*) (Dictionary_2_t3887 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m25826_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25828_gshared (Dictionary_2_t3887 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25828(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3887 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m25828_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3891 * Dictionary_2_get_Keys_m25830_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25830(__this, method) (( KeyCollection_t3891 * (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_get_Keys_m25830_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3895 * Dictionary_2_get_Values_m25832_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25832(__this, method) (( ValueCollection_t3895 * (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_get_Values_m25832_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m25834_gshared (Dictionary_2_t3887 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25834(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t3887 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25834_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m25836_gshared (Dictionary_2_t3887 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25836(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3887 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25836_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25838_gshared (Dictionary_2_t3887 * __this, KeyValuePair_2_t3888  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25838(__this, ___pair, method) (( bool (*) (Dictionary_2_t3887 *, KeyValuePair_2_t3888 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25838_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3893  Dictionary_2_GetEnumerator_m25840_gshared (Dictionary_2_t3887 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25840(__this, method) (( Enumerator_t3893  (*) (Dictionary_2_t3887 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25840_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1685  Dictionary_2_U3CCopyToU3Em__0_m25842_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m25842(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25842_gshared)(__this /* static, unused */, ___key, ___value, method)
