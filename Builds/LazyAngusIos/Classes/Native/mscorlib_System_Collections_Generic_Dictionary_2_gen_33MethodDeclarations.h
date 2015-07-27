#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1229;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4253;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1292;
// System.Collections.ICollection
struct ICollection_t653;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t3437;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t3441;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3432;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t4258;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t4259;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t4260;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1943;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m7231_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m7231(__this, method) (( void (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2__ctor_m7231_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18420_gshared (Dictionary_2_t1229 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18420(__this, ___comparer, method) (( void (*) (Dictionary_2_t1229 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18420_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18422_gshared (Dictionary_2_t1229 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m18422(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1229 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18422_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18424_gshared (Dictionary_2_t1229 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18424(__this, ___capacity, method) (( void (*) (Dictionary_2_t1229 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18424_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18426_gshared (Dictionary_2_t1229 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18426(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1229 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18426_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18428_gshared (Dictionary_2_t1229 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18428(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1229 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2__ctor_m18428_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18430_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18430(__this, method) (( Object_t* (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18430_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18432_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18432(__this, method) (( Object_t* (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18432_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m18434_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m18434(__this, method) (( Object_t * (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18434_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18436_gshared (Dictionary_2_t1229 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18436(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1229 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18436_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18438_gshared (Dictionary_2_t1229 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18438(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1229 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18438_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18440_gshared (Dictionary_2_t1229 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18440(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1229 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18440_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18442_gshared (Dictionary_2_t1229 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18442(__this, ___key, method) (( bool (*) (Dictionary_2_t1229 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18442_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18444_gshared (Dictionary_2_t1229 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18444(__this, ___key, method) (( void (*) (Dictionary_2_t1229 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18444_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18446_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18446(__this, method) (( bool (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18446_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18448_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18448(__this, method) (( Object_t * (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18448_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18450_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18450(__this, method) (( bool (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18450_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18452_gshared (Dictionary_2_t1229 * __this, KeyValuePair_2_t3435  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18452(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1229 *, KeyValuePair_2_t3435 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18452_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18454_gshared (Dictionary_2_t1229 * __this, KeyValuePair_2_t3435  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18454(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1229 *, KeyValuePair_2_t3435 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18454_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18456_gshared (Dictionary_2_t1229 * __this, KeyValuePair_2U5BU5D_t4259* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18456(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1229 *, KeyValuePair_2U5BU5D_t4259*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18456_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18458_gshared (Dictionary_2_t1229 * __this, KeyValuePair_2_t3435  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18458(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1229 *, KeyValuePair_2_t3435 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18458_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18460_gshared (Dictionary_2_t1229 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18460(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1229 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18460_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18462_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18462(__this, method) (( Object_t * (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18462_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18464_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18464(__this, method) (( Object_t* (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18464_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18466_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18466(__this, method) (( Object_t * (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18466_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18468_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18468(__this, method) (( int32_t (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_get_Count_m18468_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m18470_gshared (Dictionary_2_t1229 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18470(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1229 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m18470_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18472_gshared (Dictionary_2_t1229 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18472(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1229 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m18472_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18474_gshared (Dictionary_2_t1229 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18474(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1229 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18474_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18476_gshared (Dictionary_2_t1229 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18476(__this, ___size, method) (( void (*) (Dictionary_2_t1229 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18476_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18478_gshared (Dictionary_2_t1229 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18478(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1229 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18478_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3435  Dictionary_2_make_pair_m18480_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18480(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3435  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m18480_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m18482_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m18482(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m18482_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m18484_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18484(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m18484_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18486_gshared (Dictionary_2_t1229 * __this, KeyValuePair_2U5BU5D_t4259* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18486(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1229 *, KeyValuePair_2U5BU5D_t4259*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18486_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m18488_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18488(__this, method) (( void (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_Resize_m18488_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18490_gshared (Dictionary_2_t1229 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18490(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1229 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m18490_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m18492_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18492(__this, method) (( void (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_Clear_m18492_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18494_gshared (Dictionary_2_t1229 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18494(__this, ___key, method) (( bool (*) (Dictionary_2_t1229 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m18494_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18496_gshared (Dictionary_2_t1229 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18496(__this, ___value, method) (( bool (*) (Dictionary_2_t1229 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m18496_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18498_gshared (Dictionary_2_t1229 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18498(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1229 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2_GetObjectData_m18498_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18500_gshared (Dictionary_2_t1229 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18500(__this, ___sender, method) (( void (*) (Dictionary_2_t1229 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18500_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18502_gshared (Dictionary_2_t1229 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18502(__this, ___key, method) (( bool (*) (Dictionary_2_t1229 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m18502_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18504_gshared (Dictionary_2_t1229 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18504(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1229 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m18504_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t3437 * Dictionary_2_get_Keys_m18505_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m18505(__this, method) (( KeyCollection_t3437 * (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_get_Keys_m18505_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t3441 * Dictionary_2_get_Values_m18507_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18507(__this, method) (( ValueCollection_t3441 * (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_get_Values_m18507_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m18509_gshared (Dictionary_2_t1229 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18509(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1229 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18509_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m18511_gshared (Dictionary_2_t1229 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18511(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1229 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18511_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18513_gshared (Dictionary_2_t1229 * __this, KeyValuePair_2_t3435  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18513(__this, ___pair, method) (( bool (*) (Dictionary_2_t1229 *, KeyValuePair_2_t3435 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18513_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t3439  Dictionary_2_GetEnumerator_m18514_gshared (Dictionary_2_t1229 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18514(__this, method) (( Enumerator_t3439  (*) (Dictionary_2_t1229 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18514_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2181  Dictionary_2_U3CCopyToU3Em__0_m18516_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18516(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18516_gshared)(__this /* static, unused */, ___key, ___value, method)
