#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1515;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t6002;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t6006;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1215;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t1544;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6619;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t6012;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m26205_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m26205(__this, method) (( void (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2__ctor_m26205_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26207_gshared (Dictionary_2_t1515 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26207(__this, ___comparer, method) (( void (*) (Dictionary_2_t1515 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26207_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m26209_gshared (Dictionary_2_t1515 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m26209(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1515 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26209_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m26211_gshared (Dictionary_2_t1515 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m26211(__this, ___capacity, method) (( void (*) (Dictionary_2_t1515 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26211_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26213_gshared (Dictionary_2_t1515 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26213(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1515 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26213_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m26215_gshared (Dictionary_2_t1515 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m26215(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1515 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m26215_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26217_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26217(__this, method) (( Object_t* (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26217_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26219_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26219(__this, method) (( Object_t* (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26219_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m26221_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m26221(__this, method) (( Object_t * (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26221_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m26223_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m26223(__this, method) (( Object_t * (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m26223_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m26225_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m26225(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26225_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m26227_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m26227(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1515 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26227_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m26229_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m26229(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1515 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26229_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m26231_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m26231(__this, ___key, method) (( bool (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26231_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m26233_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m26233(__this, ___key, method) (( void (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26233_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26235_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26235(__this, method) (( bool (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26235_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26237_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26237(__this, method) (( Object_t * (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26237_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26239_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26239(__this, method) (( bool (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26239_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26241_gshared (Dictionary_2_t1515 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26241(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1515 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26241_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26243_gshared (Dictionary_2_t1515 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26243(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1515 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26243_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26245_gshared (Dictionary_2_t1515 * __this, KeyValuePair_2U5BU5D_t6619* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26245(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1515 *, KeyValuePair_2U5BU5D_t6619*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26245_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26247_gshared (Dictionary_2_t1515 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26247(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1515 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26247_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m26249_gshared (Dictionary_2_t1515 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m26249(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1515 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26249_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26251_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26251(__this, method) (( Object_t * (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26251_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26253_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26253(__this, method) (( Object_t* (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26253_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26255_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26255(__this, method) (( Object_t * (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26255_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m26257_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m26257(__this, method) (( int32_t (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_get_Count_m26257_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m26259_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m26259(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m26259_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m26261_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m26261(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1515 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m26261_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m26263_gshared (Dictionary_2_t1515 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m26263(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1515 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26263_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m26265_gshared (Dictionary_2_t1515 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m26265(__this, ___size, method) (( void (*) (Dictionary_2_t1515 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26265_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m26267_gshared (Dictionary_2_t1515 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m26267(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1515 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26267_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t70  Dictionary_2_make_pair_m26269_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m26269(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t70  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m26269_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m26271_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m26271(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m26271_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m26273_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m26273(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m26273_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m26275_gshared (Dictionary_2_t1515 * __this, KeyValuePair_2U5BU5D_t6619* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m26275(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1515 *, KeyValuePair_2U5BU5D_t6619*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26275_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m26277_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m26277(__this, method) (( void (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_Resize_m26277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m26279_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m26279(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1515 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m26279_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m26281_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m26281(__this, method) (( void (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_Clear_m26281_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m26283_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m26283(__this, ___key, method) (( bool (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m26283_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m26285_gshared (Dictionary_2_t1515 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m26285(__this, ___value, method) (( bool (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m26285_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m26287_gshared (Dictionary_2_t1515 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m26287(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1515 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m26287_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m26289_gshared (Dictionary_2_t1515 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m26289(__this, ___sender, method) (( void (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26289_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m26291_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m26291(__this, ___key, method) (( bool (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m26291_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m26293_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m26293(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1515 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m26293_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t6002 * Dictionary_2_get_Keys_m26294_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m26294(__this, method) (( KeyCollection_t6002 * (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_get_Keys_m26294_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t6006 * Dictionary_2_get_Values_m26296_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m26296(__this, method) (( ValueCollection_t6006 * (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_get_Values_m26296_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m26298_gshared (Dictionary_2_t1515 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m26298(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26298_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m26300_gshared (Dictionary_2_t1515 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m26300(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1515 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26300_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m26302_gshared (Dictionary_2_t1515 * __this, KeyValuePair_2_t70  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m26302(__this, ___pair, method) (( bool (*) (Dictionary_2_t1515 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26302_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t6004  Dictionary_2_GetEnumerator_m26303_gshared (Dictionary_2_t1515 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m26303(__this, method) (( Enumerator_t6004  (*) (Dictionary_2_t1515 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26303_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m26305_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m26305(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m26305_gshared)(__this /* static, unused */, ___key, ___value, method)
