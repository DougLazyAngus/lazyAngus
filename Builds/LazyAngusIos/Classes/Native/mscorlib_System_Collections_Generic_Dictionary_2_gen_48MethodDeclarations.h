#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1487;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t5441;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t5445;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1187;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t1516;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6037;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5451;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m21795_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m21795(__this, method) (( void (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2__ctor_m21795_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21797_gshared (Dictionary_2_t1487 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21797(__this, ___comparer, method) (( void (*) (Dictionary_2_t1487 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21797_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m21799_gshared (Dictionary_2_t1487 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m21799(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1487 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21799_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21801_gshared (Dictionary_2_t1487 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21801(__this, ___capacity, method) (( void (*) (Dictionary_2_t1487 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21801_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21803_gshared (Dictionary_2_t1487 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21803(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1487 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21803_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21805_gshared (Dictionary_2_t1487 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21805(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1487 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m21805_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21807_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21807(__this, method) (( Object_t* (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21807_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21809_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21809(__this, method) (( Object_t* (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21809_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m21811_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m21811(__this, method) (( Object_t * (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21811_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21813_gshared (Dictionary_2_t1487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21813(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1487 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21813_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21815_gshared (Dictionary_2_t1487 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21815(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1487 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21815_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21817_gshared (Dictionary_2_t1487 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21817(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1487 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21817_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21819_gshared (Dictionary_2_t1487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21819(__this, ___key, method) (( bool (*) (Dictionary_2_t1487 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21819_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21821_gshared (Dictionary_2_t1487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21821(__this, ___key, method) (( void (*) (Dictionary_2_t1487 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21821_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21823_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21823(__this, method) (( bool (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21823_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21825_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21825(__this, method) (( Object_t * (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21825_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21827_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21827(__this, method) (( bool (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21827_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21829_gshared (Dictionary_2_t1487 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21829(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1487 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21829_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21831_gshared (Dictionary_2_t1487 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21831(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1487 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21831_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21833_gshared (Dictionary_2_t1487 * __this, KeyValuePair_2U5BU5D_t6037* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21833(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1487 *, KeyValuePair_2U5BU5D_t6037*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21833_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21835_gshared (Dictionary_2_t1487 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21835(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1487 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21835_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21837_gshared (Dictionary_2_t1487 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21837(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1487 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21837_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21839_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21839(__this, method) (( Object_t * (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21839_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21841_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21841(__this, method) (( Object_t* (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21841_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21843_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21843(__this, method) (( Object_t * (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21843_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21845_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21845(__this, method) (( int32_t (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_get_Count_m21845_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m21847_gshared (Dictionary_2_t1487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21847(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1487 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21847_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21849_gshared (Dictionary_2_t1487 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21849(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1487 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m21849_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21851_gshared (Dictionary_2_t1487 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21851(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1487 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21851_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21853_gshared (Dictionary_2_t1487 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21853(__this, ___size, method) (( void (*) (Dictionary_2_t1487 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21853_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21855_gshared (Dictionary_2_t1487 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21855(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1487 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21855_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t70  Dictionary_2_make_pair_m21857_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21857(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t70  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m21857_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21859_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21859(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m21859_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m21861_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21861(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m21861_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21863_gshared (Dictionary_2_t1487 * __this, KeyValuePair_2U5BU5D_t6037* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21863(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1487 *, KeyValuePair_2U5BU5D_t6037*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21863_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m21865_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21865(__this, method) (( void (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_Resize_m21865_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21867_gshared (Dictionary_2_t1487 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21867(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1487 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m21867_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m21869_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21869(__this, method) (( void (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_Clear_m21869_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21871_gshared (Dictionary_2_t1487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21871(__this, ___key, method) (( bool (*) (Dictionary_2_t1487 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21871_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21873_gshared (Dictionary_2_t1487 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21873(__this, ___value, method) (( bool (*) (Dictionary_2_t1487 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21873_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21875_gshared (Dictionary_2_t1487 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21875(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1487 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m21875_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21877_gshared (Dictionary_2_t1487 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21877(__this, ___sender, method) (( void (*) (Dictionary_2_t1487 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21877_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21879_gshared (Dictionary_2_t1487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21879(__this, ___key, method) (( bool (*) (Dictionary_2_t1487 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21879_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21881_gshared (Dictionary_2_t1487 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21881(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1487 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21881_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t5441 * Dictionary_2_get_Keys_m21882_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21882(__this, method) (( KeyCollection_t5441 * (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_get_Keys_m21882_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t5445 * Dictionary_2_get_Values_m21884_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21884(__this, method) (( ValueCollection_t5445 * (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_get_Values_m21884_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21886_gshared (Dictionary_2_t1487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21886(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1487 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21886_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m21888_gshared (Dictionary_2_t1487 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21888(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1487 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21888_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21890_gshared (Dictionary_2_t1487 * __this, KeyValuePair_2_t70  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21890(__this, ___pair, method) (( bool (*) (Dictionary_2_t1487 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21890_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t5443  Dictionary_2_GetEnumerator_m21891_gshared (Dictionary_2_t1487 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21891(__this, method) (( Enumerator_t5443  (*) (Dictionary_2_t1487 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21891_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m21893_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21893(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21893_gshared)(__this /* static, unused */, ___key, ___value, method)
