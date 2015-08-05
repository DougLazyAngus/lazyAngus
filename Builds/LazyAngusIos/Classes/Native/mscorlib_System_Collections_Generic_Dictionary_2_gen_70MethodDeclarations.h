#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8406;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9113;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1171;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t8409;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t8413;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t8404;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t9540;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t9541;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t9542;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3912;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_133.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__66.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m60793_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m60793(__this, method) (( void (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2__ctor_m60793_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m60795_gshared (Dictionary_2_t8406 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m60795(__this, ___comparer, method) (( void (*) (Dictionary_2_t8406 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60795_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m60797_gshared (Dictionary_2_t8406 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m60797(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8406 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60797_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m60799_gshared (Dictionary_2_t8406 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m60799(__this, ___capacity, method) (( void (*) (Dictionary_2_t8406 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m60799_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m60801_gshared (Dictionary_2_t8406 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m60801(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8406 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60801_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m60803_gshared (Dictionary_2_t8406 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m60803(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8406 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2__ctor_m60803_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60805_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60805(__this, method) (( Object_t* (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60805_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60807_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60807(__this, method) (( Object_t* (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60807_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m60809_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m60809(__this, method) (( Object_t * (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m60809_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m60811_gshared (Dictionary_2_t8406 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m60811(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8406 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m60811_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m60813_gshared (Dictionary_2_t8406 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m60813(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8406 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m60813_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m60815_gshared (Dictionary_2_t8406 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m60815(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8406 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m60815_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m60817_gshared (Dictionary_2_t8406 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m60817(__this, ___key, method) (( bool (*) (Dictionary_2_t8406 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m60817_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m60819_gshared (Dictionary_2_t8406 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m60819(__this, ___key, method) (( void (*) (Dictionary_2_t8406 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m60819_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60821_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60821(__this, method) (( bool (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60821_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60823_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60823(__this, method) (( Object_t * (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60823_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60825_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60825(__this, method) (( bool (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60825_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60827_gshared (Dictionary_2_t8406 * __this, KeyValuePair_2_t8407  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60827(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8406 *, KeyValuePair_2_t8407 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60827_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60829_gshared (Dictionary_2_t8406 * __this, KeyValuePair_2_t8407  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60829(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8406 *, KeyValuePair_2_t8407 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60829_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60831_gshared (Dictionary_2_t8406 * __this, KeyValuePair_2U5BU5D_t9541* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60831(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8406 *, KeyValuePair_2U5BU5D_t9541*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60831_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60833_gshared (Dictionary_2_t8406 * __this, KeyValuePair_2_t8407  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60833(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8406 *, KeyValuePair_2_t8407 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60833_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m60835_gshared (Dictionary_2_t8406 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m60835(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8406 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m60835_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60837_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60837(__this, method) (( Object_t * (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60837_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60839_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60839(__this, method) (( Object_t* (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60839_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60841_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60841(__this, method) (( Object_t * (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60841_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m60843_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m60843(__this, method) (( int32_t (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_get_Count_m60843_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m60845_gshared (Dictionary_2_t8406 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m60845(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8406 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m60845_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m60847_gshared (Dictionary_2_t8406 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m60847(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8406 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m60847_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m60849_gshared (Dictionary_2_t8406 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m60849(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8406 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m60849_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m60851_gshared (Dictionary_2_t8406 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m60851(__this, ___size, method) (( void (*) (Dictionary_2_t8406 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m60851_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m60853_gshared (Dictionary_2_t8406 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m60853(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8406 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m60853_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8407  Dictionary_2_make_pair_m60855_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m60855(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8407  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m60855_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m60857_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m60857(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m60857_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m60859_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m60859(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m60859_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m60861_gshared (Dictionary_2_t8406 * __this, KeyValuePair_2U5BU5D_t9541* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m60861(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8406 *, KeyValuePair_2U5BU5D_t9541*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m60861_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m60863_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m60863(__this, method) (( void (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_Resize_m60863_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m60865_gshared (Dictionary_2_t8406 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m60865(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8406 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m60865_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m60867_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m60867(__this, method) (( void (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_Clear_m60867_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m60869_gshared (Dictionary_2_t8406 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m60869(__this, ___key, method) (( bool (*) (Dictionary_2_t8406 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m60869_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m60871_gshared (Dictionary_2_t8406 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m60871(__this, ___value, method) (( bool (*) (Dictionary_2_t8406 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m60871_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m60873_gshared (Dictionary_2_t8406 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m60873(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8406 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2_GetObjectData_m60873_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m60875_gshared (Dictionary_2_t8406 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m60875(__this, ___sender, method) (( void (*) (Dictionary_2_t8406 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m60875_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m60877_gshared (Dictionary_2_t8406 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m60877(__this, ___key, method) (( bool (*) (Dictionary_2_t8406 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m60877_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m60879_gshared (Dictionary_2_t8406 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m60879(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8406 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m60879_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t8409 * Dictionary_2_get_Keys_m60881_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m60881(__this, method) (( KeyCollection_t8409 * (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_get_Keys_m60881_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t8413 * Dictionary_2_get_Values_m60883_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m60883(__this, method) (( ValueCollection_t8413 * (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_get_Values_m60883_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m60885_gshared (Dictionary_2_t8406 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m60885(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t8406 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m60885_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m60887_gshared (Dictionary_2_t8406 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m60887(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t8406 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m60887_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m60889_gshared (Dictionary_2_t8406 * __this, KeyValuePair_2_t8407  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m60889(__this, ___pair, method) (( bool (*) (Dictionary_2_t8406 *, KeyValuePair_2_t8407 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m60889_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t8411  Dictionary_2_GetEnumerator_m60891_gshared (Dictionary_2_t8406 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m60891(__this, method) (( Enumerator_t8411  (*) (Dictionary_2_t8406 *, const MethodInfo*))Dictionary_2_GetEnumerator_m60891_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2089  Dictionary_2_U3CCopyToU3Em__0_m60893_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m60893(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2089  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m60893_gshared)(__this /* static, unused */, ___key, ___value, method)
