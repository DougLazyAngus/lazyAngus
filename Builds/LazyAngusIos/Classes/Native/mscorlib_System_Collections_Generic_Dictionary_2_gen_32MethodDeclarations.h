#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3405;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4158;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t3408;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t3412;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3312;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t4198;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4199;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t4200;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m18393_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18393(__this, method) (( void (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2__ctor_m18393_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18395_gshared (Dictionary_2_t3405 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18395(__this, ___comparer, method) (( void (*) (Dictionary_2_t3405 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18397_gshared (Dictionary_2_t3405 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m18397(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3405 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18397_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18398_gshared (Dictionary_2_t3405 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18398(__this, ___capacity, method) (( void (*) (Dictionary_2_t3405 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18398_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18400_gshared (Dictionary_2_t3405 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18400(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3405 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18400_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18402_gshared (Dictionary_2_t3405 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18402(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3405 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m18402_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18404_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18404(__this, method) (( Object_t* (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18404_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18406_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18406(__this, method) (( Object_t* (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18406_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m18408_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m18408(__this, method) (( Object_t * (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18408_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18410_gshared (Dictionary_2_t3405 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18410(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3405 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18410_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18412_gshared (Dictionary_2_t3405 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18412(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3405 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18412_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18414_gshared (Dictionary_2_t3405 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18414(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3405 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18414_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18416_gshared (Dictionary_2_t3405 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18416(__this, ___key, method) (( bool (*) (Dictionary_2_t3405 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18416_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18418_gshared (Dictionary_2_t3405 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18418(__this, ___key, method) (( void (*) (Dictionary_2_t3405 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18418_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18420_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18420(__this, method) (( bool (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18420_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18422_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18422(__this, method) (( Object_t * (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18424_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18424(__this, method) (( bool (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18424_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18426_gshared (Dictionary_2_t3405 * __this, KeyValuePair_2_t3406  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18426(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3405 *, KeyValuePair_2_t3406 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18426_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18428_gshared (Dictionary_2_t3405 * __this, KeyValuePair_2_t3406  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18428(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3405 *, KeyValuePair_2_t3406 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18428_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18430_gshared (Dictionary_2_t3405 * __this, KeyValuePair_2U5BU5D_t4199* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18430(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3405 *, KeyValuePair_2U5BU5D_t4199*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18430_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18432_gshared (Dictionary_2_t3405 * __this, KeyValuePair_2_t3406  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18432(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3405 *, KeyValuePair_2_t3406 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18432_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18434_gshared (Dictionary_2_t3405 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18434(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3405 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18434_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18436_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18436(__this, method) (( Object_t * (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18436_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18438_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18438(__this, method) (( Object_t* (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18438_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18440_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18440(__this, method) (( Object_t * (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18440_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18442_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18442(__this, method) (( int32_t (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_get_Count_m18442_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m18444_gshared (Dictionary_2_t3405 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18444(__this, ___key, method) (( int32_t (*) (Dictionary_2_t3405 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18444_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18446_gshared (Dictionary_2_t3405 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18446(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3405 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m18446_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18448_gshared (Dictionary_2_t3405 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18448(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3405 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18448_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18450_gshared (Dictionary_2_t3405 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18450(__this, ___size, method) (( void (*) (Dictionary_2_t3405 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18450_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18452_gshared (Dictionary_2_t3405 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18452(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3405 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18452_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3406  Dictionary_2_make_pair_m18454_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18454(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3406  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m18454_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m18456_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m18456(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m18456_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m18458_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18458(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m18458_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18460_gshared (Dictionary_2_t3405 * __this, KeyValuePair_2U5BU5D_t4199* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18460(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3405 *, KeyValuePair_2U5BU5D_t4199*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18460_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m18462_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18462(__this, method) (( void (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_Resize_m18462_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18464_gshared (Dictionary_2_t3405 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18464(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3405 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m18464_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m18466_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18466(__this, method) (( void (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_Clear_m18466_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18468_gshared (Dictionary_2_t3405 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18468(__this, ___key, method) (( bool (*) (Dictionary_2_t3405 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18468_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18470_gshared (Dictionary_2_t3405 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18470(__this, ___value, method) (( bool (*) (Dictionary_2_t3405 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m18470_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18472_gshared (Dictionary_2_t3405 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18472(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3405 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m18472_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18474_gshared (Dictionary_2_t3405 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18474(__this, ___sender, method) (( void (*) (Dictionary_2_t3405 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18474_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18476_gshared (Dictionary_2_t3405 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18476(__this, ___key, method) (( bool (*) (Dictionary_2_t3405 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18476_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18478_gshared (Dictionary_2_t3405 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18478(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3405 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m18478_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t3408 * Dictionary_2_get_Keys_m18480_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m18480(__this, method) (( KeyCollection_t3408 * (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_get_Keys_m18480_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t3412 * Dictionary_2_get_Values_m18482_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18482(__this, method) (( ValueCollection_t3412 * (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_get_Values_m18482_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18484_gshared (Dictionary_2_t3405 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18484(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3405 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18484_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m18486_gshared (Dictionary_2_t3405 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18486(__this, ___value, method) (( int32_t (*) (Dictionary_2_t3405 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18486_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18488_gshared (Dictionary_2_t3405 * __this, KeyValuePair_2_t3406  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18488(__this, ___pair, method) (( bool (*) (Dictionary_2_t3405 *, KeyValuePair_2_t3406 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18488_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3410  Dictionary_2_GetEnumerator_m18490_gshared (Dictionary_2_t3405 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18490(__this, method) (( Enumerator_t3410  (*) (Dictionary_2_t3405 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18490_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1685  Dictionary_2_U3CCopyToU3Em__0_m18492_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18492(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18492_gshared)(__this /* static, unused */, ___key, ___value, method)
