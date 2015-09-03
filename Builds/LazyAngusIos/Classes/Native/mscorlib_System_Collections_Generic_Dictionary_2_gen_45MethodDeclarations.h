#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2870;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9329;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t5951;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t5955;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5942;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t9333;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t9334;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t9335;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10328_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10328(__this, method) (( void (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2__ctor_m10328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25430_gshared (Dictionary_2_t2870 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25430(__this, ___comparer, method) (( void (*) (Dictionary_2_t2870 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25430_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25432_gshared (Dictionary_2_t2870 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m25432(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2870 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25432_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25434_gshared (Dictionary_2_t2870 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25434(__this, ___capacity, method) (( void (*) (Dictionary_2_t2870 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25434_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25436_gshared (Dictionary_2_t2870 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25436(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2870 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25436_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25438_gshared (Dictionary_2_t2870 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25438(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2870 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m25438_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25440_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25440(__this, method) (( Object_t* (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25440_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25442_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25442(__this, method) (( Object_t* (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25442_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25444_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25444(__this, method) (( Object_t * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25444_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m25446_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m25446(__this, method) (( Object_t * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m25446_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25448_gshared (Dictionary_2_t2870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25448(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25448_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25450_gshared (Dictionary_2_t2870 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25450(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2870 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25450_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25452_gshared (Dictionary_2_t2870 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25452(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2870 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25452_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25454_gshared (Dictionary_2_t2870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25454(__this, ___key, method) (( bool (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25454_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25456_gshared (Dictionary_2_t2870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25456(__this, ___key, method) (( void (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25456_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25458_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25458(__this, method) (( bool (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25458_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25460_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25460(__this, method) (( Object_t * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25460_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25462_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25462(__this, method) (( bool (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25462_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25464_gshared (Dictionary_2_t2870 * __this, KeyValuePair_2_t5945  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25464(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2870 *, KeyValuePair_2_t5945 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25464_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25466_gshared (Dictionary_2_t2870 * __this, KeyValuePair_2_t5945  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25466(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2870 *, KeyValuePair_2_t5945 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25466_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25468_gshared (Dictionary_2_t2870 * __this, KeyValuePair_2U5BU5D_t9334* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25468(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2870 *, KeyValuePair_2U5BU5D_t9334*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25468_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25470_gshared (Dictionary_2_t2870 * __this, KeyValuePair_2_t5945  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25470(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2870 *, KeyValuePair_2_t5945 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25470_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25472_gshared (Dictionary_2_t2870 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25472(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2870 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25472_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25474_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25474(__this, method) (( Object_t * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25474_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25476_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25476(__this, method) (( Object_t* (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25476_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25478_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25478(__this, method) (( Object_t * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25478_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25480_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25480(__this, method) (( int32_t (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_get_Count_m25480_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m25482_gshared (Dictionary_2_t2870 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25482(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2870 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m25482_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25484_gshared (Dictionary_2_t2870 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25484(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2870 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m25484_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25486_gshared (Dictionary_2_t2870 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25486(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2870 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25486_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25488_gshared (Dictionary_2_t2870 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25488(__this, ___size, method) (( void (*) (Dictionary_2_t2870 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25488_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25490_gshared (Dictionary_2_t2870 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25490(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2870 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25490_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5945  Dictionary_2_make_pair_m25492_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25492(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5945  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m25492_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m25494_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25494(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m25494_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m25496_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25496(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m25496_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25498_gshared (Dictionary_2_t2870 * __this, KeyValuePair_2U5BU5D_t9334* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25498(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2870 *, KeyValuePair_2U5BU5D_t9334*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25498_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m25500_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25500(__this, method) (( void (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_Resize_m25500_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25502_gshared (Dictionary_2_t2870 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25502(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2870 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m25502_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m25504_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25504(__this, method) (( void (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_Clear_m25504_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25506_gshared (Dictionary_2_t2870 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25506(__this, ___key, method) (( bool (*) (Dictionary_2_t2870 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m25506_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25508_gshared (Dictionary_2_t2870 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25508(__this, ___value, method) (( bool (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m25508_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25510_gshared (Dictionary_2_t2870 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25510(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2870 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m25510_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25512_gshared (Dictionary_2_t2870 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25512(__this, ___sender, method) (( void (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25512_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25514_gshared (Dictionary_2_t2870 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25514(__this, ___key, method) (( bool (*) (Dictionary_2_t2870 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m25514_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25516_gshared (Dictionary_2_t2870 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25516(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2870 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m25516_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t5951 * Dictionary_2_get_Keys_m25518_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25518(__this, method) (( KeyCollection_t5951 * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_get_Keys_m25518_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t5955 * Dictionary_2_get_Values_m25520_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25520(__this, method) (( ValueCollection_t5955 * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_get_Values_m25520_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m25522_gshared (Dictionary_2_t2870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25522(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25522_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m25524_gshared (Dictionary_2_t2870 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25524(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25524_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25526_gshared (Dictionary_2_t2870 * __this, KeyValuePair_2_t5945  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25526(__this, ___pair, method) (( bool (*) (Dictionary_2_t2870 *, KeyValuePair_2_t5945 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25526_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t5953  Dictionary_2_GetEnumerator_m25528_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25528(__this, method) (( Enumerator_t5953  (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25528_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m25530_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m25530(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m25530_gshared)(__this /* static, unused */, ___key, ___value, method)
