#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2870;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8742;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t5418;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t5422;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5409;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t8746;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t8747;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t8748;
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
extern "C" void Dictionary_2__ctor_m10325_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10325(__this, method) (( void (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2__ctor_m10325_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21243_gshared (Dictionary_2_t2870 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21243(__this, ___comparer, method) (( void (*) (Dictionary_2_t2870 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21243_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m21245_gshared (Dictionary_2_t2870 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m21245(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2870 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21245_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21247_gshared (Dictionary_2_t2870 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21247(__this, ___capacity, method) (( void (*) (Dictionary_2_t2870 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21247_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21249_gshared (Dictionary_2_t2870 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21249(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2870 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21249_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21251_gshared (Dictionary_2_t2870 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21251(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2870 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m21251_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21253_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21253(__this, method) (( Object_t* (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21253_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21255_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21255(__this, method) (( Object_t* (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21255_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m21257_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m21257(__this, method) (( Object_t * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21257_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21259_gshared (Dictionary_2_t2870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21259(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21259_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21261_gshared (Dictionary_2_t2870 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21261(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2870 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21261_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21263_gshared (Dictionary_2_t2870 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21263(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2870 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21263_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21265_gshared (Dictionary_2_t2870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21265(__this, ___key, method) (( bool (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21265_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21267_gshared (Dictionary_2_t2870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21267(__this, ___key, method) (( void (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21267_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21269_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21269(__this, method) (( bool (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21269_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21271_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21271(__this, method) (( Object_t * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21271_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21273_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21273(__this, method) (( bool (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21273_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21275_gshared (Dictionary_2_t2870 * __this, KeyValuePair_2_t5412  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21275(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2870 *, KeyValuePair_2_t5412 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21275_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21277_gshared (Dictionary_2_t2870 * __this, KeyValuePair_2_t5412  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21277(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2870 *, KeyValuePair_2_t5412 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21277_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21279_gshared (Dictionary_2_t2870 * __this, KeyValuePair_2U5BU5D_t8747* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21279(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2870 *, KeyValuePair_2U5BU5D_t8747*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21279_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21281_gshared (Dictionary_2_t2870 * __this, KeyValuePair_2_t5412  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21281(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2870 *, KeyValuePair_2_t5412 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21281_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21283_gshared (Dictionary_2_t2870 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21283(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2870 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21283_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21285_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21285(__this, method) (( Object_t * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21285_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21287_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21287(__this, method) (( Object_t* (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21287_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21289_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21289(__this, method) (( Object_t * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21289_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21291_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21291(__this, method) (( int32_t (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_get_Count_m21291_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m21293_gshared (Dictionary_2_t2870 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21293(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2870 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m21293_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21295_gshared (Dictionary_2_t2870 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21295(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2870 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m21295_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21297_gshared (Dictionary_2_t2870 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21297(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2870 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21297_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21299_gshared (Dictionary_2_t2870 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21299(__this, ___size, method) (( void (*) (Dictionary_2_t2870 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21299_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21301_gshared (Dictionary_2_t2870 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21301(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2870 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21301_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5412  Dictionary_2_make_pair_m21303_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21303(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5412  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m21303_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m21305_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21305(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m21305_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m21307_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21307(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m21307_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21309_gshared (Dictionary_2_t2870 * __this, KeyValuePair_2U5BU5D_t8747* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21309(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2870 *, KeyValuePair_2U5BU5D_t8747*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21309_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m21311_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21311(__this, method) (( void (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_Resize_m21311_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21313_gshared (Dictionary_2_t2870 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21313(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2870 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m21313_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m21315_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21315(__this, method) (( void (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_Clear_m21315_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21317_gshared (Dictionary_2_t2870 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21317(__this, ___key, method) (( bool (*) (Dictionary_2_t2870 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m21317_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21319_gshared (Dictionary_2_t2870 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21319(__this, ___value, method) (( bool (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21319_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21321_gshared (Dictionary_2_t2870 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21321(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2870 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m21321_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21323_gshared (Dictionary_2_t2870 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21323(__this, ___sender, method) (( void (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21323_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21325_gshared (Dictionary_2_t2870 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21325(__this, ___key, method) (( bool (*) (Dictionary_2_t2870 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m21325_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21327_gshared (Dictionary_2_t2870 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21327(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2870 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21327_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t5418 * Dictionary_2_get_Keys_m21329_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21329(__this, method) (( KeyCollection_t5418 * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_get_Keys_m21329_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t5422 * Dictionary_2_get_Values_m21331_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21331(__this, method) (( ValueCollection_t5422 * (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_get_Values_m21331_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m21333_gshared (Dictionary_2_t2870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21333(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21333_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m21335_gshared (Dictionary_2_t2870 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21335(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2870 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21335_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21337_gshared (Dictionary_2_t2870 * __this, KeyValuePair_2_t5412  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21337(__this, ___pair, method) (( bool (*) (Dictionary_2_t2870 *, KeyValuePair_2_t5412 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21337_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t5420  Dictionary_2_GetEnumerator_m21339_gshared (Dictionary_2_t2870 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21339(__this, method) (( Enumerator_t5420  (*) (Dictionary_2_t2870 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21339_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__0_m21341_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21341(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21341_gshared)(__this /* static, unused */, ___key, ___value, method)
