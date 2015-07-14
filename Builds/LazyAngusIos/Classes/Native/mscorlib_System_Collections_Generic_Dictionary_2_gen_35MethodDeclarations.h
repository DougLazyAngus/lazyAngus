#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3904;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t4513;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1236;
// System.Collections.ICollection
struct ICollection_t590;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3908;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t3912;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t3902;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t4514;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1245;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t4515;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t4516;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1441;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__31.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m25773_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m25773(__this, method) (( void (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2__ctor_m25773_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25775_gshared (Dictionary_2_t3904 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25775(__this, ___comparer, method) (( void (*) (Dictionary_2_t3904 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25775_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25777_gshared (Dictionary_2_t3904 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m25777(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3904 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25777_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25779_gshared (Dictionary_2_t3904 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25779(__this, ___capacity, method) (( void (*) (Dictionary_2_t3904 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25779_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25781_gshared (Dictionary_2_t3904 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25781(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3904 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25781_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25783_gshared (Dictionary_2_t3904 * __this, SerializationInfo_t1245 * ___info, StreamingContext_t1246  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25783(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3904 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2__ctor_m25783_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25785_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25785(__this, method) (( Object_t* (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25785_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25787_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25787(__this, method) (( Object_t* (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25787_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25789_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25789(__this, method) (( Object_t * (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25789_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25791_gshared (Dictionary_2_t3904 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25791(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3904 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25791_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25793_gshared (Dictionary_2_t3904 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25793(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3904 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25793_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25795_gshared (Dictionary_2_t3904 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25795(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3904 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25795_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25797_gshared (Dictionary_2_t3904 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25797(__this, ___key, method) (( bool (*) (Dictionary_2_t3904 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25797_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25799_gshared (Dictionary_2_t3904 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25799(__this, ___key, method) (( void (*) (Dictionary_2_t3904 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25799_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25801_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25801(__this, method) (( bool (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25801_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25803_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25803(__this, method) (( Object_t * (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25805_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25805(__this, method) (( bool (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25805_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25807_gshared (Dictionary_2_t3904 * __this, KeyValuePair_2_t3905  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25807(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3904 *, KeyValuePair_2_t3905 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25807_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25809_gshared (Dictionary_2_t3904 * __this, KeyValuePair_2_t3905  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25809(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3904 *, KeyValuePair_2_t3905 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25809_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25811_gshared (Dictionary_2_t3904 * __this, KeyValuePair_2U5BU5D_t4515* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25811(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3904 *, KeyValuePair_2U5BU5D_t4515*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25811_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25813_gshared (Dictionary_2_t3904 * __this, KeyValuePair_2_t3905  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25813(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3904 *, KeyValuePair_2_t3905 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25813_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25815_gshared (Dictionary_2_t3904 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25815(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3904 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25815_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25817_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25817(__this, method) (( Object_t * (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25817_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25819_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25819(__this, method) (( Object_t* (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25819_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25821_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25821(__this, method) (( Object_t * (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25821_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25823_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25823(__this, method) (( int32_t (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_get_Count_m25823_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m25825_gshared (Dictionary_2_t3904 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25825(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3904 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m25825_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25827_gshared (Dictionary_2_t3904 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25827(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3904 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m25827_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25829_gshared (Dictionary_2_t3904 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25829(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3904 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25829_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25831_gshared (Dictionary_2_t3904 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25831(__this, ___size, method) (( void (*) (Dictionary_2_t3904 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25831_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25833_gshared (Dictionary_2_t3904 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25833(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3904 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25833_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3905  Dictionary_2_make_pair_m25835_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25835(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3905  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m25835_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m25837_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25837(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m25837_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m25839_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25839(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m25839_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25841_gshared (Dictionary_2_t3904 * __this, KeyValuePair_2U5BU5D_t4515* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25841(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3904 *, KeyValuePair_2U5BU5D_t4515*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25841_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m25843_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25843(__this, method) (( void (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_Resize_m25843_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25845_gshared (Dictionary_2_t3904 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25845(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3904 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m25845_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m25847_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25847(__this, method) (( void (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_Clear_m25847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25849_gshared (Dictionary_2_t3904 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25849(__this, ___key, method) (( bool (*) (Dictionary_2_t3904 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m25849_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25851_gshared (Dictionary_2_t3904 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25851(__this, ___value, method) (( bool (*) (Dictionary_2_t3904 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m25851_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25853_gshared (Dictionary_2_t3904 * __this, SerializationInfo_t1245 * ___info, StreamingContext_t1246  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25853(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3904 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2_GetObjectData_m25853_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25855_gshared (Dictionary_2_t3904 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25855(__this, ___sender, method) (( void (*) (Dictionary_2_t3904 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25855_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25857_gshared (Dictionary_2_t3904 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25857(__this, ___key, method) (( bool (*) (Dictionary_2_t3904 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m25857_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25859_gshared (Dictionary_2_t3904 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25859(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3904 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m25859_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3908 * Dictionary_2_get_Keys_m25861_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25861(__this, method) (( KeyCollection_t3908 * (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_get_Keys_m25861_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3912 * Dictionary_2_get_Values_m25863_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25863(__this, method) (( ValueCollection_t3912 * (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_get_Values_m25863_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m25865_gshared (Dictionary_2_t3904 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25865(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t3904 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25865_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m25867_gshared (Dictionary_2_t3904 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25867(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3904 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25867_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25869_gshared (Dictionary_2_t3904 * __this, KeyValuePair_2_t3905  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25869(__this, ___pair, method) (( bool (*) (Dictionary_2_t3904 *, KeyValuePair_2_t3905 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25869_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3910  Dictionary_2_GetEnumerator_m25871_gshared (Dictionary_2_t3904 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25871(__this, method) (( Enumerator_t3910  (*) (Dictionary_2_t3904 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25871_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1708  Dictionary_2_U3CCopyToU3Em__0_m25873_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m25873(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1708  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25873_gshared)(__this /* static, unused */, ___key, ___value, method)
