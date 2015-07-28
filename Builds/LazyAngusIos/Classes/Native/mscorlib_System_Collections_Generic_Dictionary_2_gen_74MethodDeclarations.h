﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8436;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t8978;
// System.Collections.ICollection
struct ICollection_t696;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t8437;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t8441;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1125;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t9562;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t9563;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t9564;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3901;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_135.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__69.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m61369_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m61369(__this, method) (( void (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2__ctor_m61369_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61371_gshared (Dictionary_2_t8436 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61371(__this, ___comparer, method) (( void (*) (Dictionary_2_t8436 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61371_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m61373_gshared (Dictionary_2_t8436 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m61373(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8436 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61373_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m61375_gshared (Dictionary_2_t8436 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m61375(__this, ___capacity, method) (( void (*) (Dictionary_2_t8436 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m61375_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61377_gshared (Dictionary_2_t8436 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61377(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8436 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61377_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m61379_gshared (Dictionary_2_t8436 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m61379(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8436 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2__ctor_m61379_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61381_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61381(__this, method) (( Object_t* (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61381_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61383_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61383(__this, method) (( Object_t* (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61383_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m61385_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m61385(__this, method) (( Object_t * (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m61385_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m61387_gshared (Dictionary_2_t8436 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m61387(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8436 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m61387_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m61389_gshared (Dictionary_2_t8436 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m61389(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8436 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m61389_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m61391_gshared (Dictionary_2_t8436 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m61391(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8436 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m61391_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m61393_gshared (Dictionary_2_t8436 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m61393(__this, ___key, method) (( bool (*) (Dictionary_2_t8436 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m61393_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m61395_gshared (Dictionary_2_t8436 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m61395(__this, ___key, method) (( void (*) (Dictionary_2_t8436 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m61395_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61397_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61397(__this, method) (( bool (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61397_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61399_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61399(__this, method) (( Object_t * (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61399_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61401_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61401(__this, method) (( bool (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61401_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61403_gshared (Dictionary_2_t8436 * __this, KeyValuePair_2_t8412  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61403(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8436 *, KeyValuePair_2_t8412 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61403_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61405_gshared (Dictionary_2_t8436 * __this, KeyValuePair_2_t8412  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61405(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8436 *, KeyValuePair_2_t8412 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61405_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61407_gshared (Dictionary_2_t8436 * __this, KeyValuePair_2U5BU5D_t9563* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61407(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8436 *, KeyValuePair_2U5BU5D_t9563*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61407_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61409_gshared (Dictionary_2_t8436 * __this, KeyValuePair_2_t8412  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61409(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8436 *, KeyValuePair_2_t8412 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61409_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m61411_gshared (Dictionary_2_t8436 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m61411(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8436 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m61411_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61413_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61413(__this, method) (( Object_t * (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61413_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61415_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61415(__this, method) (( Object_t* (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61415_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61417_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61417(__this, method) (( Object_t * (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61417_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m61419_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m61419(__this, method) (( int32_t (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_get_Count_m61419_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t70  Dictionary_2_get_Item_m61421_gshared (Dictionary_2_t8436 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m61421(__this, ___key, method) (( KeyValuePair_2_t70  (*) (Dictionary_2_t8436 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m61421_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m61423_gshared (Dictionary_2_t8436 * __this, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m61423(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8436 *, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_set_Item_m61423_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m61425_gshared (Dictionary_2_t8436 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m61425(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8436 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m61425_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m61427_gshared (Dictionary_2_t8436 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m61427(__this, ___size, method) (( void (*) (Dictionary_2_t8436 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m61427_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m61429_gshared (Dictionary_2_t8436 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m61429(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8436 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m61429_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8412  Dictionary_2_make_pair_m61431_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m61431(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8412  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_make_pair_m61431_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m61433_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m61433(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_pick_key_m61433_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t70  Dictionary_2_pick_value_m61435_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m61435(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t70  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_pick_value_m61435_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m61437_gshared (Dictionary_2_t8436 * __this, KeyValuePair_2U5BU5D_t9563* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m61437(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8436 *, KeyValuePair_2U5BU5D_t9563*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m61437_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m61439_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m61439(__this, method) (( void (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_Resize_m61439_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m61441_gshared (Dictionary_2_t8436 * __this, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m61441(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8436 *, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_Add_m61441_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m61443_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m61443(__this, method) (( void (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_Clear_m61443_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m61445_gshared (Dictionary_2_t8436 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m61445(__this, ___key, method) (( bool (*) (Dictionary_2_t8436 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m61445_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m61447_gshared (Dictionary_2_t8436 * __this, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m61447(__this, ___value, method) (( bool (*) (Dictionary_2_t8436 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_ContainsValue_m61447_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m61449_gshared (Dictionary_2_t8436 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m61449(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8436 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2_GetObjectData_m61449_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m61451_gshared (Dictionary_2_t8436 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m61451(__this, ___sender, method) (( void (*) (Dictionary_2_t8436 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m61451_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m61453_gshared (Dictionary_2_t8436 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m61453(__this, ___key, method) (( bool (*) (Dictionary_2_t8436 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m61453_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m61455_gshared (Dictionary_2_t8436 * __this, Object_t * ___key, KeyValuePair_2_t70 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m61455(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8436 *, Object_t *, KeyValuePair_2_t70 *, const MethodInfo*))Dictionary_2_TryGetValue_m61455_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t8437 * Dictionary_2_get_Keys_m61457_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m61457(__this, method) (( KeyCollection_t8437 * (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_get_Keys_m61457_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t8441 * Dictionary_2_get_Values_m61459_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m61459(__this, method) (( ValueCollection_t8441 * (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_get_Values_m61459_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m61461_gshared (Dictionary_2_t8436 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m61461(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8436 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m61461_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t70  Dictionary_2_ToTValue_m61463_gshared (Dictionary_2_t8436 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m61463(__this, ___value, method) (( KeyValuePair_2_t70  (*) (Dictionary_2_t8436 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m61463_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m61465_gshared (Dictionary_2_t8436 * __this, KeyValuePair_2_t8412  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m61465(__this, ___pair, method) (( bool (*) (Dictionary_2_t8436 *, KeyValuePair_2_t8412 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m61465_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t8439  Dictionary_2_GetEnumerator_m61467_gshared (Dictionary_2_t8436 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m61467(__this, method) (( Enumerator_t8439  (*) (Dictionary_2_t8436 *, const MethodInfo*))Dictionary_2_GetEnumerator_m61467_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2079  Dictionary_2_U3CCopyToU3Em__0_m61469_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m61469(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m61469_gshared)(__this /* static, unused */, ___key, ___value, method)