#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1173;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4175;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1236;
// System.Collections.ICollection
struct ICollection_t590;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t3382;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t3386;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3377;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t4180;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1245;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t4181;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t4182;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1441;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m6614_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m6614(__this, method) (( void (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2__ctor_m6614_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17807_gshared (Dictionary_2_t1173 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17807(__this, ___comparer, method) (( void (*) (Dictionary_2_t1173 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17807_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17809_gshared (Dictionary_2_t1173 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17809(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1173 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17809_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17811_gshared (Dictionary_2_t1173 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17811(__this, ___capacity, method) (( void (*) (Dictionary_2_t1173 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17811_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17813_gshared (Dictionary_2_t1173 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17813(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1173 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17813_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17815_gshared (Dictionary_2_t1173 * __this, SerializationInfo_t1245 * ___info, StreamingContext_t1246  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17815(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1173 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2__ctor_m17815_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17817_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17817(__this, method) (( Object_t* (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17817_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17819_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17819(__this, method) (( Object_t* (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17819_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m17821_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m17821(__this, method) (( Object_t * (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17821_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17823_gshared (Dictionary_2_t1173 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17823(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1173 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17823_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17825_gshared (Dictionary_2_t1173 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17825(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1173 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17825_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17827_gshared (Dictionary_2_t1173 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17827(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1173 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17827_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17829_gshared (Dictionary_2_t1173 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17829(__this, ___key, method) (( bool (*) (Dictionary_2_t1173 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17829_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17831_gshared (Dictionary_2_t1173 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17831(__this, ___key, method) (( void (*) (Dictionary_2_t1173 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17831_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17833_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17833(__this, method) (( bool (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17833_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17835_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17835(__this, method) (( Object_t * (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17835_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17837_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17837(__this, method) (( bool (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17837_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17839_gshared (Dictionary_2_t1173 * __this, KeyValuePair_2_t3380  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17839(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1173 *, KeyValuePair_2_t3380 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17839_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17841_gshared (Dictionary_2_t1173 * __this, KeyValuePair_2_t3380  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17841(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1173 *, KeyValuePair_2_t3380 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17841_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17843_gshared (Dictionary_2_t1173 * __this, KeyValuePair_2U5BU5D_t4181* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17843(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1173 *, KeyValuePair_2U5BU5D_t4181*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17843_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17845_gshared (Dictionary_2_t1173 * __this, KeyValuePair_2_t3380  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17845(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1173 *, KeyValuePair_2_t3380 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17845_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17847_gshared (Dictionary_2_t1173 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17847(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1173 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17847_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17849_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17849(__this, method) (( Object_t * (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17849_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17851_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17851(__this, method) (( Object_t* (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17851_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17853_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17853(__this, method) (( Object_t * (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17853_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17855_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17855(__this, method) (( int32_t (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_get_Count_m17855_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m17857_gshared (Dictionary_2_t1173 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17857(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1173 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17857_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17859_gshared (Dictionary_2_t1173 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17859(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1173 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m17859_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17861_gshared (Dictionary_2_t1173 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17861(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1173 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17861_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17863_gshared (Dictionary_2_t1173 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17863(__this, ___size, method) (( void (*) (Dictionary_2_t1173 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17863_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17865_gshared (Dictionary_2_t1173 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17865(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1173 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17865_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3380  Dictionary_2_make_pair_m17867_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17867(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3380  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m17867_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m17869_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17869(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m17869_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m17871_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17871(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m17871_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17873_gshared (Dictionary_2_t1173 * __this, KeyValuePair_2U5BU5D_t4181* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17873(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1173 *, KeyValuePair_2U5BU5D_t4181*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17873_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m17875_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17875(__this, method) (( void (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_Resize_m17875_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17877_gshared (Dictionary_2_t1173 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17877(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1173 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m17877_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m17879_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17879(__this, method) (( void (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_Clear_m17879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17881_gshared (Dictionary_2_t1173 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17881(__this, ___key, method) (( bool (*) (Dictionary_2_t1173 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17881_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17883_gshared (Dictionary_2_t1173 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17883(__this, ___value, method) (( bool (*) (Dictionary_2_t1173 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m17883_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17885_gshared (Dictionary_2_t1173 * __this, SerializationInfo_t1245 * ___info, StreamingContext_t1246  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17885(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1173 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2_GetObjectData_m17885_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17887_gshared (Dictionary_2_t1173 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17887(__this, ___sender, method) (( void (*) (Dictionary_2_t1173 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17887_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17889_gshared (Dictionary_2_t1173 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17889(__this, ___key, method) (( bool (*) (Dictionary_2_t1173 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17889_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17891_gshared (Dictionary_2_t1173 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17891(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1173 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m17891_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t3382 * Dictionary_2_get_Keys_m17892_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17892(__this, method) (( KeyCollection_t3382 * (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_get_Keys_m17892_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t3386 * Dictionary_2_get_Values_m17894_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17894(__this, method) (( ValueCollection_t3386 * (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_get_Values_m17894_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m17896_gshared (Dictionary_2_t1173 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17896(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1173 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17896_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m17898_gshared (Dictionary_2_t1173 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17898(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1173 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17898_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17900_gshared (Dictionary_2_t1173 * __this, KeyValuePair_2_t3380  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17900(__this, ___pair, method) (( bool (*) (Dictionary_2_t1173 *, KeyValuePair_2_t3380 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17900_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t3384  Dictionary_2_GetEnumerator_m17901_gshared (Dictionary_2_t1173 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17901(__this, method) (( Enumerator_t3384  (*) (Dictionary_2_t1173 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17901_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1708  Dictionary_2_U3CCopyToU3Em__0_m17903_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17903(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1708  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17903_gshared)(__this /* static, unused */, ___key, ___value, method)
