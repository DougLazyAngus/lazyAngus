#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2854;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8713;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t5402;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t5406;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5393;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t8717;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t8718;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t8719;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10196_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10196(__this, method) (( void (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2__ctor_m10196_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21114_gshared (Dictionary_2_t2854 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21114(__this, ___comparer, method) (( void (*) (Dictionary_2_t2854 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21114_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m21116_gshared (Dictionary_2_t2854 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m21116(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2854 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21116_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21118_gshared (Dictionary_2_t2854 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21118(__this, ___capacity, method) (( void (*) (Dictionary_2_t2854 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21118_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21120_gshared (Dictionary_2_t2854 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21120(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2854 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21120_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21122_gshared (Dictionary_2_t2854 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21122(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2854 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m21122_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21124_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21124(__this, method) (( Object_t* (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21124_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21126_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21126(__this, method) (( Object_t* (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21126_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m21128_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m21128(__this, method) (( Object_t * (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21128_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21130_gshared (Dictionary_2_t2854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21130(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2854 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21130_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21132_gshared (Dictionary_2_t2854 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21132(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2854 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21132_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21134_gshared (Dictionary_2_t2854 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21134(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2854 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21134_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21136_gshared (Dictionary_2_t2854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21136(__this, ___key, method) (( bool (*) (Dictionary_2_t2854 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21136_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21138_gshared (Dictionary_2_t2854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21138(__this, ___key, method) (( void (*) (Dictionary_2_t2854 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21138_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21140_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21140(__this, method) (( bool (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21140_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21142_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21142(__this, method) (( Object_t * (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21142_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21144_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21144(__this, method) (( bool (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21144_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21146_gshared (Dictionary_2_t2854 * __this, KeyValuePair_2_t5396  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21146(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2854 *, KeyValuePair_2_t5396 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21146_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21148_gshared (Dictionary_2_t2854 * __this, KeyValuePair_2_t5396  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21148(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2854 *, KeyValuePair_2_t5396 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21148_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21150_gshared (Dictionary_2_t2854 * __this, KeyValuePair_2U5BU5D_t8718* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21150(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2854 *, KeyValuePair_2U5BU5D_t8718*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21150_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21152_gshared (Dictionary_2_t2854 * __this, KeyValuePair_2_t5396  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21152(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2854 *, KeyValuePair_2_t5396 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21152_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21154_gshared (Dictionary_2_t2854 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21154(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2854 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21154_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21156_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21156(__this, method) (( Object_t * (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21156_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21158_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21158(__this, method) (( Object_t* (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21158_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21160_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21160(__this, method) (( Object_t * (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21160_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21162_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21162(__this, method) (( int32_t (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_get_Count_m21162_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m21164_gshared (Dictionary_2_t2854 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21164(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2854 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m21164_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21166_gshared (Dictionary_2_t2854 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21166(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2854 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m21166_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21168_gshared (Dictionary_2_t2854 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21168(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2854 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21168_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21170_gshared (Dictionary_2_t2854 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21170(__this, ___size, method) (( void (*) (Dictionary_2_t2854 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21170_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21172_gshared (Dictionary_2_t2854 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21172(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2854 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21172_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5396  Dictionary_2_make_pair_m21174_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21174(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5396  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m21174_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m21176_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21176(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m21176_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m21178_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21178(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m21178_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21180_gshared (Dictionary_2_t2854 * __this, KeyValuePair_2U5BU5D_t8718* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21180(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2854 *, KeyValuePair_2U5BU5D_t8718*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21180_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m21182_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21182(__this, method) (( void (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_Resize_m21182_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21184_gshared (Dictionary_2_t2854 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21184(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2854 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m21184_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m21186_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21186(__this, method) (( void (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_Clear_m21186_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21188_gshared (Dictionary_2_t2854 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21188(__this, ___key, method) (( bool (*) (Dictionary_2_t2854 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m21188_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21190_gshared (Dictionary_2_t2854 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21190(__this, ___value, method) (( bool (*) (Dictionary_2_t2854 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21190_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21192_gshared (Dictionary_2_t2854 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21192(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2854 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m21192_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21194_gshared (Dictionary_2_t2854 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21194(__this, ___sender, method) (( void (*) (Dictionary_2_t2854 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21194_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21196_gshared (Dictionary_2_t2854 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21196(__this, ___key, method) (( bool (*) (Dictionary_2_t2854 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m21196_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21198_gshared (Dictionary_2_t2854 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21198(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2854 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21198_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t5402 * Dictionary_2_get_Keys_m21200_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21200(__this, method) (( KeyCollection_t5402 * (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_get_Keys_m21200_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t5406 * Dictionary_2_get_Values_m21202_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21202(__this, method) (( ValueCollection_t5406 * (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_get_Values_m21202_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m21204_gshared (Dictionary_2_t2854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21204(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2854 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21204_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m21206_gshared (Dictionary_2_t2854 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21206(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2854 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21206_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21208_gshared (Dictionary_2_t2854 * __this, KeyValuePair_2_t5396  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21208(__this, ___pair, method) (( bool (*) (Dictionary_2_t2854 *, KeyValuePair_2_t5396 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21208_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t5404  Dictionary_2_GetEnumerator_m21210_gshared (Dictionary_2_t2854 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21210(__this, method) (( Enumerator_t5404  (*) (Dictionary_2_t2854 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21210_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2140  Dictionary_2_U3CCopyToU3Em__0_m21212_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21212(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21212_gshared)(__this /* static, unused */, ___key, ___value, method)
