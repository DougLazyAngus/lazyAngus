#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4068;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8624;
// System.Collections.ICollection
struct ICollection_t696;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t8564;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8568;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5336;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t9614;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9615;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t9616;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3901;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_142.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__73.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m63045_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m63045(__this, method) (( void (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2__ctor_m63045_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m63046_gshared (Dictionary_2_t4068 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m63046(__this, ___comparer, method) (( void (*) (Dictionary_2_t4068 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m63047_gshared (Dictionary_2_t4068 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m63047(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4068 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63047_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m63048_gshared (Dictionary_2_t4068 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m63048(__this, ___capacity, method) (( void (*) (Dictionary_2_t4068 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m63048_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m63049_gshared (Dictionary_2_t4068 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m63049(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4068 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63049_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m63050_gshared (Dictionary_2_t4068 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m63050(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4068 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2__ctor_m63050_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63051_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63051(__this, method) (( Object_t* (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63051_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63052_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63052(__this, method) (( Object_t* (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63052_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m63053_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m63053(__this, method) (( Object_t * (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m63053_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m63054_gshared (Dictionary_2_t4068 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m63054(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4068 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m63054_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m63055_gshared (Dictionary_2_t4068 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m63055(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4068 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m63055_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m63056_gshared (Dictionary_2_t4068 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m63056(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4068 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m63056_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m63057_gshared (Dictionary_2_t4068 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m63057(__this, ___key, method) (( bool (*) (Dictionary_2_t4068 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m63057_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m63058_gshared (Dictionary_2_t4068 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m63058(__this, ___key, method) (( void (*) (Dictionary_2_t4068 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m63058_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63059_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63059(__this, method) (( bool (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63059_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63060_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63060(__this, method) (( Object_t * (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63060_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63061_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63061(__this, method) (( bool (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63061_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63062_gshared (Dictionary_2_t4068 * __this, KeyValuePair_2_t8562  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63062(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4068 *, KeyValuePair_2_t8562 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63062_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63063_gshared (Dictionary_2_t4068 * __this, KeyValuePair_2_t8562  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63063(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4068 *, KeyValuePair_2_t8562 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63063_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63064_gshared (Dictionary_2_t4068 * __this, KeyValuePair_2U5BU5D_t9615* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63064(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4068 *, KeyValuePair_2U5BU5D_t9615*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63064_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63065_gshared (Dictionary_2_t4068 * __this, KeyValuePair_2_t8562  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63065(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4068 *, KeyValuePair_2_t8562 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63065_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m63066_gshared (Dictionary_2_t4068 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m63066(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4068 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m63066_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63067_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63067(__this, method) (( Object_t * (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63067_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63068_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63068(__this, method) (( Object_t* (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63068_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63069_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63069(__this, method) (( Object_t * (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63069_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m63070_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m63070(__this, method) (( int32_t (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_get_Count_m63070_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m63071_gshared (Dictionary_2_t4068 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m63071(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4068 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m63071_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m63072_gshared (Dictionary_2_t4068 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m63072(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4068 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m63072_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m63073_gshared (Dictionary_2_t4068 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m63073(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4068 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m63073_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m63074_gshared (Dictionary_2_t4068 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m63074(__this, ___size, method) (( void (*) (Dictionary_2_t4068 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m63074_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m63075_gshared (Dictionary_2_t4068 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m63075(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4068 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m63075_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8562  Dictionary_2_make_pair_m63076_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m63076(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8562  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m63076_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m63077_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m63077(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m63077_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m63078_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m63078(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m63078_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m63079_gshared (Dictionary_2_t4068 * __this, KeyValuePair_2U5BU5D_t9615* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m63079(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4068 *, KeyValuePair_2U5BU5D_t9615*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m63079_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m63080_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m63080(__this, method) (( void (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_Resize_m63080_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m63081_gshared (Dictionary_2_t4068 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m63081(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4068 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m63081_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m63082_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m63082(__this, method) (( void (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_Clear_m63082_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m63083_gshared (Dictionary_2_t4068 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m63083(__this, ___key, method) (( bool (*) (Dictionary_2_t4068 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m63083_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m63084_gshared (Dictionary_2_t4068 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m63084(__this, ___value, method) (( bool (*) (Dictionary_2_t4068 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m63084_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m63085_gshared (Dictionary_2_t4068 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m63085(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4068 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2_GetObjectData_m63085_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m63086_gshared (Dictionary_2_t4068 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m63086(__this, ___sender, method) (( void (*) (Dictionary_2_t4068 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m63086_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m63087_gshared (Dictionary_2_t4068 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m63087(__this, ___key, method) (( bool (*) (Dictionary_2_t4068 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m63087_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m63088_gshared (Dictionary_2_t4068 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m63088(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4068 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m63088_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t8564 * Dictionary_2_get_Keys_m63089_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m63089(__this, method) (( KeyCollection_t8564 * (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_get_Keys_m63089_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t8568 * Dictionary_2_get_Values_m63090_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m63090(__this, method) (( ValueCollection_t8568 * (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_get_Values_m63090_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m63091_gshared (Dictionary_2_t4068 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m63091(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4068 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m63091_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m63092_gshared (Dictionary_2_t4068 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m63092(__this, ___value, method) (( int32_t (*) (Dictionary_2_t4068 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m63092_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m63093_gshared (Dictionary_2_t4068 * __this, KeyValuePair_2_t8562  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m63093(__this, ___pair, method) (( bool (*) (Dictionary_2_t4068 *, KeyValuePair_2_t8562 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m63093_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8566  Dictionary_2_GetEnumerator_m63094_gshared (Dictionary_2_t4068 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m63094(__this, method) (( Enumerator_t8566  (*) (Dictionary_2_t4068 *, const MethodInfo*))Dictionary_2_GetEnumerator_m63094_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2079  Dictionary_2_U3CCopyToU3Em__0_m63095_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m63095(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m63095_gshared)(__this /* static, unused */, ___key, ___value, method)
