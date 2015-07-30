#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4076;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8632;
// System.Collections.ICollection
struct ICollection_t704;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t8572;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8576;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5344;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t9622;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9623;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t9624;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3909;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_142.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__73.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m63092_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m63092(__this, method) (( void (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2__ctor_m63092_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m63093_gshared (Dictionary_2_t4076 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m63093(__this, ___comparer, method) (( void (*) (Dictionary_2_t4076 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63093_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m63094_gshared (Dictionary_2_t4076 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m63094(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4076 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63094_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m63095_gshared (Dictionary_2_t4076 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m63095(__this, ___capacity, method) (( void (*) (Dictionary_2_t4076 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m63095_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m63096_gshared (Dictionary_2_t4076 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m63096(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4076 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63096_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m63097_gshared (Dictionary_2_t4076 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m63097(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4076 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))Dictionary_2__ctor_m63097_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63098_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63098(__this, method) (( Object_t* (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63098_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63099_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63099(__this, method) (( Object_t* (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63099_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m63100_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m63100(__this, method) (( Object_t * (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m63100_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m63101_gshared (Dictionary_2_t4076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m63101(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4076 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m63101_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m63102_gshared (Dictionary_2_t4076 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m63102(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4076 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m63102_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m63103_gshared (Dictionary_2_t4076 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m63103(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4076 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m63103_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m63104_gshared (Dictionary_2_t4076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m63104(__this, ___key, method) (( bool (*) (Dictionary_2_t4076 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m63104_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m63105_gshared (Dictionary_2_t4076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m63105(__this, ___key, method) (( void (*) (Dictionary_2_t4076 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m63105_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63106_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63106(__this, method) (( bool (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63106_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63107_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63107(__this, method) (( Object_t * (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63107_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63108_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63108(__this, method) (( bool (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63108_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63109_gshared (Dictionary_2_t4076 * __this, KeyValuePair_2_t8570  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63109(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4076 *, KeyValuePair_2_t8570 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63109_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63110_gshared (Dictionary_2_t4076 * __this, KeyValuePair_2_t8570  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63110(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4076 *, KeyValuePair_2_t8570 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63110_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63111_gshared (Dictionary_2_t4076 * __this, KeyValuePair_2U5BU5D_t9623* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63111(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4076 *, KeyValuePair_2U5BU5D_t9623*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63111_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63112_gshared (Dictionary_2_t4076 * __this, KeyValuePair_2_t8570  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63112(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4076 *, KeyValuePair_2_t8570 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63112_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m63113_gshared (Dictionary_2_t4076 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m63113(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4076 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m63113_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63114_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63114(__this, method) (( Object_t * (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63114_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63115_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63115(__this, method) (( Object_t* (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63115_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63116_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63116(__this, method) (( Object_t * (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63116_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m63117_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m63117(__this, method) (( int32_t (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_get_Count_m63117_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m63118_gshared (Dictionary_2_t4076 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m63118(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4076 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m63118_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m63119_gshared (Dictionary_2_t4076 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m63119(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4076 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m63119_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m63120_gshared (Dictionary_2_t4076 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m63120(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4076 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m63120_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m63121_gshared (Dictionary_2_t4076 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m63121(__this, ___size, method) (( void (*) (Dictionary_2_t4076 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m63121_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m63122_gshared (Dictionary_2_t4076 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m63122(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4076 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m63122_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8570  Dictionary_2_make_pair_m63123_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m63123(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8570  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m63123_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m63124_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m63124(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m63124_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m63125_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m63125(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m63125_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m63126_gshared (Dictionary_2_t4076 * __this, KeyValuePair_2U5BU5D_t9623* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m63126(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4076 *, KeyValuePair_2U5BU5D_t9623*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m63126_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m63127_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m63127(__this, method) (( void (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_Resize_m63127_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m63128_gshared (Dictionary_2_t4076 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m63128(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4076 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m63128_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m63129_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m63129(__this, method) (( void (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_Clear_m63129_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m63130_gshared (Dictionary_2_t4076 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m63130(__this, ___key, method) (( bool (*) (Dictionary_2_t4076 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m63130_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m63131_gshared (Dictionary_2_t4076 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m63131(__this, ___value, method) (( bool (*) (Dictionary_2_t4076 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m63131_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m63132_gshared (Dictionary_2_t4076 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m63132(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4076 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))Dictionary_2_GetObjectData_m63132_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m63133_gshared (Dictionary_2_t4076 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m63133(__this, ___sender, method) (( void (*) (Dictionary_2_t4076 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m63133_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m63134_gshared (Dictionary_2_t4076 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m63134(__this, ___key, method) (( bool (*) (Dictionary_2_t4076 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m63134_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m63135_gshared (Dictionary_2_t4076 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m63135(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4076 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m63135_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t8572 * Dictionary_2_get_Keys_m63136_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m63136(__this, method) (( KeyCollection_t8572 * (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_get_Keys_m63136_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t8576 * Dictionary_2_get_Values_m63137_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m63137(__this, method) (( ValueCollection_t8576 * (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_get_Values_m63137_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m63138_gshared (Dictionary_2_t4076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m63138(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4076 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m63138_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m63139_gshared (Dictionary_2_t4076 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m63139(__this, ___value, method) (( int32_t (*) (Dictionary_2_t4076 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m63139_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m63140_gshared (Dictionary_2_t4076 * __this, KeyValuePair_2_t8570  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m63140(__this, ___pair, method) (( bool (*) (Dictionary_2_t4076 *, KeyValuePair_2_t8570 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m63140_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8574  Dictionary_2_GetEnumerator_m63141_gshared (Dictionary_2_t4076 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m63141(__this, method) (( Enumerator_t8574  (*) (Dictionary_2_t4076 *, const MethodInfo*))Dictionary_2_GetEnumerator_m63141_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2086  Dictionary_2_U3CCopyToU3Em__0_m63142_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m63142(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2086  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m63142_gshared)(__this /* static, unused */, ___key, ___value, method)
