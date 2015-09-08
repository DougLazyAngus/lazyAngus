#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6082;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9330;
// System.Collections.ICollection
struct ICollection_t769;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t6085;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t6089;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1205;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t9426;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2937;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8128;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7798;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t799;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m28117_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m28117(__this, method) (( void (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2__ctor_m28117_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28119_gshared (Dictionary_2_t6082 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28119(__this, ___comparer, method) (( void (*) (Dictionary_2_t6082 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28119_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m28121_gshared (Dictionary_2_t6082 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m28121(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6082 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28121_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m28122_gshared (Dictionary_2_t6082 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m28122(__this, ___capacity, method) (( void (*) (Dictionary_2_t6082 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m28122_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28124_gshared (Dictionary_2_t6082 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28124(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6082 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28124_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m28126_gshared (Dictionary_2_t6082 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m28126(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6082 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))Dictionary_2__ctor_m28126_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28128_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28128(__this, method) (( Object_t* (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28128_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28130_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28130(__this, method) (( Object_t* (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28130_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m28132_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m28132(__this, method) (( Object_t * (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m28132_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m28134_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m28134(__this, method) (( Object_t * (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m28134_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m28136_gshared (Dictionary_2_t6082 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m28136(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6082 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m28136_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m28138_gshared (Dictionary_2_t6082 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m28138(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6082 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m28138_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m28140_gshared (Dictionary_2_t6082 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m28140(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6082 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m28140_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m28142_gshared (Dictionary_2_t6082 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m28142(__this, ___key, method) (( bool (*) (Dictionary_2_t6082 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m28142_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m28144_gshared (Dictionary_2_t6082 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m28144(__this, ___key, method) (( void (*) (Dictionary_2_t6082 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m28144_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28146_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28146(__this, method) (( bool (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28146_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28148_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28148(__this, method) (( Object_t * (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28148_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28150_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28150(__this, method) (( bool (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28150_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28152_gshared (Dictionary_2_t6082 * __this, KeyValuePair_2_t6083  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28152(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6082 *, KeyValuePair_2_t6083 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28152_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28154_gshared (Dictionary_2_t6082 * __this, KeyValuePair_2_t6083  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28154(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6082 *, KeyValuePair_2_t6083 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28154_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28156_gshared (Dictionary_2_t6082 * __this, KeyValuePair_2U5BU5D_t8128* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28156(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6082 *, KeyValuePair_2U5BU5D_t8128*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28156_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28158_gshared (Dictionary_2_t6082 * __this, KeyValuePair_2_t6083  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28158(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6082 *, KeyValuePair_2_t6083 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28158_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m28160_gshared (Dictionary_2_t6082 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m28160(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6082 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m28160_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28162_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28162(__this, method) (( Object_t * (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28162_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28164_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28164(__this, method) (( Object_t* (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28164_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28166_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28166(__this, method) (( Object_t * (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28166_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m28168_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m28168(__this, method) (( int32_t (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_get_Count_m28168_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m28170_gshared (Dictionary_2_t6082 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m28170(__this, ___key, method) (( int32_t (*) (Dictionary_2_t6082 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m28170_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m28172_gshared (Dictionary_2_t6082 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m28172(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6082 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m28172_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m28174_gshared (Dictionary_2_t6082 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m28174(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6082 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m28174_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m28176_gshared (Dictionary_2_t6082 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m28176(__this, ___size, method) (( void (*) (Dictionary_2_t6082 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m28176_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m28178_gshared (Dictionary_2_t6082 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m28178(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6082 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m28178_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6083  Dictionary_2_make_pair_m28180_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m28180(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6083  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m28180_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m28182_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m28182(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m28182_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m28184_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m28184(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m28184_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m28186_gshared (Dictionary_2_t6082 * __this, KeyValuePair_2U5BU5D_t8128* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m28186(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6082 *, KeyValuePair_2U5BU5D_t8128*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m28186_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m28188_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m28188(__this, method) (( void (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_Resize_m28188_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m28190_gshared (Dictionary_2_t6082 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m28190(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6082 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m28190_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m28192_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m28192(__this, method) (( void (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_Clear_m28192_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m28194_gshared (Dictionary_2_t6082 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m28194(__this, ___key, method) (( bool (*) (Dictionary_2_t6082 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m28194_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m28196_gshared (Dictionary_2_t6082 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m28196(__this, ___value, method) (( bool (*) (Dictionary_2_t6082 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m28196_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m28198_gshared (Dictionary_2_t6082 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m28198(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6082 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))Dictionary_2_GetObjectData_m28198_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m28200_gshared (Dictionary_2_t6082 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m28200(__this, ___sender, method) (( void (*) (Dictionary_2_t6082 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m28200_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m28202_gshared (Dictionary_2_t6082 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m28202(__this, ___key, method) (( bool (*) (Dictionary_2_t6082 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m28202_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m28204_gshared (Dictionary_2_t6082 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m28204(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6082 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m28204_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t6085 * Dictionary_2_get_Keys_m28206_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m28206(__this, method) (( KeyCollection_t6085 * (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_get_Keys_m28206_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t6089 * Dictionary_2_get_Values_m28208_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m28208(__this, method) (( ValueCollection_t6089 * (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_get_Values_m28208_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m28210_gshared (Dictionary_2_t6082 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m28210(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6082 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m28210_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m28212_gshared (Dictionary_2_t6082 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m28212(__this, ___value, method) (( int32_t (*) (Dictionary_2_t6082 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m28212_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m28214_gshared (Dictionary_2_t6082 * __this, KeyValuePair_2_t6083  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m28214(__this, ___pair, method) (( bool (*) (Dictionary_2_t6082 *, KeyValuePair_2_t6083 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m28214_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t6087  Dictionary_2_GetEnumerator_m28216_gshared (Dictionary_2_t6082 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m28216(__this, method) (( Enumerator_t6087  (*) (Dictionary_2_t6082 *, const MethodInfo*))Dictionary_2_GetEnumerator_m28216_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2157  Dictionary_2_U3CCopyToU3Em__2_m28218_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m28218(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2157  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m28218_gshared)(__this /* static, unused */, ___key, ___value, method)
