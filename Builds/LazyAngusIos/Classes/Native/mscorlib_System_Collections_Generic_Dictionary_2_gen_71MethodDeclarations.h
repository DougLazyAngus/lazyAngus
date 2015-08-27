﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8484;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9214;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t8487;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t8491;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t8482;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t9641;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t9642;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t9643;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_134.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__67.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m61591_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m61591(__this, method) (( void (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2__ctor_m61591_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61593_gshared (Dictionary_2_t8484 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61593(__this, ___comparer, method) (( void (*) (Dictionary_2_t8484 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61593_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m61595_gshared (Dictionary_2_t8484 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m61595(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8484 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61595_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m61597_gshared (Dictionary_2_t8484 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m61597(__this, ___capacity, method) (( void (*) (Dictionary_2_t8484 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m61597_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61599_gshared (Dictionary_2_t8484 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61599(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8484 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61599_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m61601_gshared (Dictionary_2_t8484 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m61601(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8484 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m61601_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61603_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61603(__this, method) (( Object_t* (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61603_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61605_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61605(__this, method) (( Object_t* (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61605_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m61607_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m61607(__this, method) (( Object_t * (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m61607_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m61609_gshared (Dictionary_2_t8484 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m61609(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8484 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m61609_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m61611_gshared (Dictionary_2_t8484 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m61611(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8484 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m61611_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m61613_gshared (Dictionary_2_t8484 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m61613(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8484 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m61613_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m61615_gshared (Dictionary_2_t8484 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m61615(__this, ___key, method) (( bool (*) (Dictionary_2_t8484 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m61615_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m61617_gshared (Dictionary_2_t8484 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m61617(__this, ___key, method) (( void (*) (Dictionary_2_t8484 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m61617_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61619_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61619(__this, method) (( bool (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61619_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61621_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61621(__this, method) (( Object_t * (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61621_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61623_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61623(__this, method) (( bool (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61623_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61625_gshared (Dictionary_2_t8484 * __this, KeyValuePair_2_t8485  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61625(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8484 *, KeyValuePair_2_t8485 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61625_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61627_gshared (Dictionary_2_t8484 * __this, KeyValuePair_2_t8485  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61627(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8484 *, KeyValuePair_2_t8485 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61627_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61629_gshared (Dictionary_2_t8484 * __this, KeyValuePair_2U5BU5D_t9642* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61629(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8484 *, KeyValuePair_2U5BU5D_t9642*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61629_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61631_gshared (Dictionary_2_t8484 * __this, KeyValuePair_2_t8485  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61631(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8484 *, KeyValuePair_2_t8485 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61631_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m61633_gshared (Dictionary_2_t8484 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m61633(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8484 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m61633_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61635_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61635(__this, method) (( Object_t * (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61635_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61637_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61637(__this, method) (( Object_t* (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61637_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61639_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61639(__this, method) (( Object_t * (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61639_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m61641_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m61641(__this, method) (( int32_t (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_get_Count_m61641_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m61643_gshared (Dictionary_2_t8484 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m61643(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8484 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m61643_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m61645_gshared (Dictionary_2_t8484 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m61645(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8484 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m61645_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m61647_gshared (Dictionary_2_t8484 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m61647(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8484 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m61647_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m61649_gshared (Dictionary_2_t8484 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m61649(__this, ___size, method) (( void (*) (Dictionary_2_t8484 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m61649_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m61651_gshared (Dictionary_2_t8484 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m61651(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8484 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m61651_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8485  Dictionary_2_make_pair_m61653_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m61653(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8485  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m61653_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m61655_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m61655(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m61655_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m61657_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m61657(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m61657_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m61659_gshared (Dictionary_2_t8484 * __this, KeyValuePair_2U5BU5D_t9642* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m61659(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8484 *, KeyValuePair_2U5BU5D_t9642*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m61659_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m61661_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m61661(__this, method) (( void (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_Resize_m61661_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m61663_gshared (Dictionary_2_t8484 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m61663(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8484 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m61663_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m61665_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m61665(__this, method) (( void (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_Clear_m61665_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m61667_gshared (Dictionary_2_t8484 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m61667(__this, ___key, method) (( bool (*) (Dictionary_2_t8484 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m61667_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m61669_gshared (Dictionary_2_t8484 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m61669(__this, ___value, method) (( bool (*) (Dictionary_2_t8484 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m61669_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m61671_gshared (Dictionary_2_t8484 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m61671(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8484 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m61671_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m61673_gshared (Dictionary_2_t8484 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m61673(__this, ___sender, method) (( void (*) (Dictionary_2_t8484 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m61673_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m61675_gshared (Dictionary_2_t8484 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m61675(__this, ___key, method) (( bool (*) (Dictionary_2_t8484 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m61675_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m61677_gshared (Dictionary_2_t8484 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m61677(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8484 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m61677_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t8487 * Dictionary_2_get_Keys_m61679_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m61679(__this, method) (( KeyCollection_t8487 * (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_get_Keys_m61679_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t8491 * Dictionary_2_get_Values_m61681_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m61681(__this, method) (( ValueCollection_t8491 * (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_get_Values_m61681_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m61683_gshared (Dictionary_2_t8484 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m61683(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t8484 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m61683_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m61685_gshared (Dictionary_2_t8484 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m61685(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t8484 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m61685_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m61687_gshared (Dictionary_2_t8484 * __this, KeyValuePair_2_t8485  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m61687(__this, ___pair, method) (( bool (*) (Dictionary_2_t8484 *, KeyValuePair_2_t8485 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m61687_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t8489  Dictionary_2_GetEnumerator_m61689_gshared (Dictionary_2_t8484 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m61689(__this, method) (( Enumerator_t8489  (*) (Dictionary_2_t8484 *, const MethodInfo*))Dictionary_2_GetEnumerator_m61689_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2140  Dictionary_2_U3CCopyToU3Em__0_m61691_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m61691(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m61691_gshared)(__this /* static, unused */, ___key, ___value, method)
