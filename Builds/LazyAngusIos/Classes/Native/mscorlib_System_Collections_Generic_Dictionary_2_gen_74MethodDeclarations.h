#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t9017;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9707;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t9018;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t9022;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t10249;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8257;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7819;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__65.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m65758_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m65758(__this, method) (( void (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2__ctor_m65758_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m65760_gshared (Dictionary_2_t9017 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m65760(__this, ___comparer, method) (( void (*) (Dictionary_2_t9017 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65760_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m65762_gshared (Dictionary_2_t9017 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m65762(__this, ___dictionary, method) (( void (*) (Dictionary_2_t9017 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65762_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m65764_gshared (Dictionary_2_t9017 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m65764(__this, ___capacity, method) (( void (*) (Dictionary_2_t9017 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m65764_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m65766_gshared (Dictionary_2_t9017 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m65766(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t9017 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65766_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m65768_gshared (Dictionary_2_t9017 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m65768(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9017 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m65768_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65770_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65770(__this, method) (( Object_t* (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65770_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65772_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65772(__this, method) (( Object_t* (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65772_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m65774_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m65774(__this, method) (( Object_t * (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m65774_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m65776_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m65776(__this, method) (( Object_t * (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m65776_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m65778_gshared (Dictionary_2_t9017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m65778(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9017 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m65778_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m65780_gshared (Dictionary_2_t9017 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m65780(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9017 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m65780_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m65782_gshared (Dictionary_2_t9017 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m65782(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9017 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m65782_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m65784_gshared (Dictionary_2_t9017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m65784(__this, ___key, method) (( bool (*) (Dictionary_2_t9017 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m65784_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m65786_gshared (Dictionary_2_t9017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m65786(__this, ___key, method) (( void (*) (Dictionary_2_t9017 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m65786_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65788_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65788(__this, method) (( bool (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65788_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65790_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65790(__this, method) (( Object_t * (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65790_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65792_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65792(__this, method) (( bool (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65792_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65794_gshared (Dictionary_2_t9017 * __this, KeyValuePair_2_t7814  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65794(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t9017 *, KeyValuePair_2_t7814 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65794_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65796_gshared (Dictionary_2_t9017 * __this, KeyValuePair_2_t7814  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65796(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9017 *, KeyValuePair_2_t7814 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65796_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65798_gshared (Dictionary_2_t9017 * __this, KeyValuePair_2U5BU5D_t8257* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65798(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9017 *, KeyValuePair_2U5BU5D_t8257*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65798_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65800_gshared (Dictionary_2_t9017 * __this, KeyValuePair_2_t7814  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65800(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9017 *, KeyValuePair_2_t7814 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65800_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m65802_gshared (Dictionary_2_t9017 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m65802(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9017 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m65802_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65804_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65804(__this, method) (( Object_t * (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65804_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65806_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65806(__this, method) (( Object_t* (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65806_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65808_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65808(__this, method) (( Object_t * (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65808_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m65810_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m65810(__this, method) (( int32_t (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_get_Count_m65810_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m65812_gshared (Dictionary_2_t9017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m65812(__this, ___key, method) (( int64_t (*) (Dictionary_2_t9017 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m65812_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m65814_gshared (Dictionary_2_t9017 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m65814(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9017 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m65814_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m65816_gshared (Dictionary_2_t9017 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m65816(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t9017 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m65816_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m65818_gshared (Dictionary_2_t9017 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m65818(__this, ___size, method) (( void (*) (Dictionary_2_t9017 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m65818_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m65820_gshared (Dictionary_2_t9017 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m65820(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9017 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m65820_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7814  Dictionary_2_make_pair_m65822_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m65822(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7814  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m65822_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m65824_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m65824(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m65824_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m65826_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m65826(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m65826_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m65828_gshared (Dictionary_2_t9017 * __this, KeyValuePair_2U5BU5D_t8257* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m65828(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9017 *, KeyValuePair_2U5BU5D_t8257*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m65828_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m65830_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m65830(__this, method) (( void (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_Resize_m65830_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m65832_gshared (Dictionary_2_t9017 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m65832(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9017 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m65832_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m65834_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m65834(__this, method) (( void (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_Clear_m65834_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m65836_gshared (Dictionary_2_t9017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m65836(__this, ___key, method) (( bool (*) (Dictionary_2_t9017 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m65836_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m65838_gshared (Dictionary_2_t9017 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m65838(__this, ___value, method) (( bool (*) (Dictionary_2_t9017 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m65838_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m65840_gshared (Dictionary_2_t9017 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m65840(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9017 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m65840_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m65842_gshared (Dictionary_2_t9017 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m65842(__this, ___sender, method) (( void (*) (Dictionary_2_t9017 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m65842_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m65844_gshared (Dictionary_2_t9017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m65844(__this, ___key, method) (( bool (*) (Dictionary_2_t9017 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m65844_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m65846_gshared (Dictionary_2_t9017 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m65846(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t9017 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m65846_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t9018 * Dictionary_2_get_Keys_m65848_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m65848(__this, method) (( KeyCollection_t9018 * (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_get_Keys_m65848_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t9022 * Dictionary_2_get_Values_m65850_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m65850(__this, method) (( ValueCollection_t9022 * (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_get_Values_m65850_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m65852_gshared (Dictionary_2_t9017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m65852(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9017 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m65852_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m65854_gshared (Dictionary_2_t9017 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m65854(__this, ___value, method) (( int64_t (*) (Dictionary_2_t9017 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m65854_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m65856_gshared (Dictionary_2_t9017 * __this, KeyValuePair_2_t7814  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m65856(__this, ___pair, method) (( bool (*) (Dictionary_2_t9017 *, KeyValuePair_2_t7814 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m65856_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t9020  Dictionary_2_GetEnumerator_m65858_gshared (Dictionary_2_t9017 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m65858(__this, method) (( Enumerator_t9020  (*) (Dictionary_2_t9017 *, const MethodInfo*))Dictionary_2_GetEnumerator_m65858_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m65860_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m65860(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m65860_gshared)(__this /* static, unused */, ___key, ___value, method)
