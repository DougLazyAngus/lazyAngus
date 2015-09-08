#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t9054;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9844;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1244;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t9057;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t9061;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t9052;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t10271;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t10272;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t10273;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_134.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__67.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m66215_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m66215(__this, method) (( void (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2__ctor_m66215_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m66217_gshared (Dictionary_2_t9054 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m66217(__this, ___comparer, method) (( void (*) (Dictionary_2_t9054 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m66217_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m66219_gshared (Dictionary_2_t9054 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m66219(__this, ___dictionary, method) (( void (*) (Dictionary_2_t9054 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m66219_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m66221_gshared (Dictionary_2_t9054 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m66221(__this, ___capacity, method) (( void (*) (Dictionary_2_t9054 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m66221_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m66223_gshared (Dictionary_2_t9054 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m66223(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t9054 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m66223_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m66225_gshared (Dictionary_2_t9054 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m66225(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9054 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m66225_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m66227_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m66227(__this, method) (( Object_t* (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m66227_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66229_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66229(__this, method) (( Object_t* (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66229_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m66231_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m66231(__this, method) (( Object_t * (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m66231_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m66233_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m66233(__this, method) (( Object_t * (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m66233_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m66235_gshared (Dictionary_2_t9054 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m66235(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9054 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m66235_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m66237_gshared (Dictionary_2_t9054 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m66237(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9054 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m66237_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m66239_gshared (Dictionary_2_t9054 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m66239(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9054 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m66239_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m66241_gshared (Dictionary_2_t9054 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m66241(__this, ___key, method) (( bool (*) (Dictionary_2_t9054 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m66241_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m66243_gshared (Dictionary_2_t9054 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m66243(__this, ___key, method) (( void (*) (Dictionary_2_t9054 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m66243_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m66245_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m66245(__this, method) (( bool (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m66245_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m66247_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m66247(__this, method) (( Object_t * (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m66247_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66249_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66249(__this, method) (( bool (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66249_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m66251_gshared (Dictionary_2_t9054 * __this, KeyValuePair_2_t9055  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m66251(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t9054 *, KeyValuePair_2_t9055 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m66251_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m66253_gshared (Dictionary_2_t9054 * __this, KeyValuePair_2_t9055  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m66253(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9054 *, KeyValuePair_2_t9055 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m66253_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m66255_gshared (Dictionary_2_t9054 * __this, KeyValuePair_2U5BU5D_t10272* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m66255(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9054 *, KeyValuePair_2U5BU5D_t10272*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m66255_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66257_gshared (Dictionary_2_t9054 * __this, KeyValuePair_2_t9055  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66257(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9054 *, KeyValuePair_2_t9055 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66257_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m66259_gshared (Dictionary_2_t9054 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m66259(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9054 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m66259_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m66261_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m66261(__this, method) (( Object_t * (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m66261_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m66263_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m66263(__this, method) (( Object_t* (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m66263_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m66265_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m66265(__this, method) (( Object_t * (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m66265_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m66267_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m66267(__this, method) (( int32_t (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_get_Count_m66267_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m66269_gshared (Dictionary_2_t9054 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m66269(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9054 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m66269_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m66271_gshared (Dictionary_2_t9054 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m66271(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9054 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m66271_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m66273_gshared (Dictionary_2_t9054 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m66273(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t9054 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m66273_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m66275_gshared (Dictionary_2_t9054 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m66275(__this, ___size, method) (( void (*) (Dictionary_2_t9054 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m66275_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m66277_gshared (Dictionary_2_t9054 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m66277(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9054 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m66277_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t9055  Dictionary_2_make_pair_m66279_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m66279(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t9055  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m66279_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m66281_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m66281(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m66281_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m66283_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m66283(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m66283_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m66285_gshared (Dictionary_2_t9054 * __this, KeyValuePair_2U5BU5D_t10272* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m66285(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9054 *, KeyValuePair_2U5BU5D_t10272*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m66285_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m66287_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m66287(__this, method) (( void (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_Resize_m66287_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m66289_gshared (Dictionary_2_t9054 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m66289(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9054 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m66289_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m66291_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m66291(__this, method) (( void (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_Clear_m66291_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m66293_gshared (Dictionary_2_t9054 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m66293(__this, ___key, method) (( bool (*) (Dictionary_2_t9054 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m66293_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m66295_gshared (Dictionary_2_t9054 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m66295(__this, ___value, method) (( bool (*) (Dictionary_2_t9054 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m66295_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m66297_gshared (Dictionary_2_t9054 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m66297(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9054 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m66297_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m66299_gshared (Dictionary_2_t9054 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m66299(__this, ___sender, method) (( void (*) (Dictionary_2_t9054 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m66299_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m66301_gshared (Dictionary_2_t9054 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m66301(__this, ___key, method) (( bool (*) (Dictionary_2_t9054 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m66301_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m66303_gshared (Dictionary_2_t9054 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m66303(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t9054 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m66303_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t9057 * Dictionary_2_get_Keys_m66305_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m66305(__this, method) (( KeyCollection_t9057 * (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_get_Keys_m66305_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t9061 * Dictionary_2_get_Values_m66307_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m66307(__this, method) (( ValueCollection_t9061 * (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_get_Values_m66307_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m66309_gshared (Dictionary_2_t9054 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m66309(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t9054 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m66309_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m66311_gshared (Dictionary_2_t9054 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m66311(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t9054 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m66311_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m66313_gshared (Dictionary_2_t9054 * __this, KeyValuePair_2_t9055  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m66313(__this, ___pair, method) (( bool (*) (Dictionary_2_t9054 *, KeyValuePair_2_t9055 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m66313_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t9059  Dictionary_2_GetEnumerator_m66315_gshared (Dictionary_2_t9054 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m66315(__this, method) (( Enumerator_t9059  (*) (Dictionary_2_t9054 *, const MethodInfo*))Dictionary_2_GetEnumerator_m66315_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2160  Dictionary_2_U3CCopyToU3Em__2_m66317_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m66317(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m66317_gshared)(__this /* static, unused */, ___key, ___value, method)
