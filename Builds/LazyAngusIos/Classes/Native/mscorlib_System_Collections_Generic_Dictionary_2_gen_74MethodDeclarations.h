#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8448;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t8990;
// System.Collections.ICollection
struct ICollection_t706;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t8449;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t8453;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1136;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t9574;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t9575;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t9576;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_135.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__69.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m61444_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m61444(__this, method) (( void (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2__ctor_m61444_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61446_gshared (Dictionary_2_t8448 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61446(__this, ___comparer, method) (( void (*) (Dictionary_2_t8448 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61446_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m61448_gshared (Dictionary_2_t8448 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m61448(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8448 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61448_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m61450_gshared (Dictionary_2_t8448 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m61450(__this, ___capacity, method) (( void (*) (Dictionary_2_t8448 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m61450_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61452_gshared (Dictionary_2_t8448 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61452(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8448 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61452_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m61454_gshared (Dictionary_2_t8448 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m61454(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8448 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m61454_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61456_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61456(__this, method) (( Object_t* (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61456_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61458_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61458(__this, method) (( Object_t* (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61458_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m61460_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m61460(__this, method) (( Object_t * (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m61460_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m61462_gshared (Dictionary_2_t8448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m61462(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8448 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m61462_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m61464_gshared (Dictionary_2_t8448 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m61464(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8448 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m61464_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m61466_gshared (Dictionary_2_t8448 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m61466(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8448 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m61466_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m61468_gshared (Dictionary_2_t8448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m61468(__this, ___key, method) (( bool (*) (Dictionary_2_t8448 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m61468_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m61470_gshared (Dictionary_2_t8448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m61470(__this, ___key, method) (( void (*) (Dictionary_2_t8448 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m61470_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61472_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61472(__this, method) (( bool (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61472_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61474_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61474(__this, method) (( Object_t * (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61474_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61476_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61476(__this, method) (( bool (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61476_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61478_gshared (Dictionary_2_t8448 * __this, KeyValuePair_2_t8424  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61478(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8448 *, KeyValuePair_2_t8424 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61478_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61480_gshared (Dictionary_2_t8448 * __this, KeyValuePair_2_t8424  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61480(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8448 *, KeyValuePair_2_t8424 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61480_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61482_gshared (Dictionary_2_t8448 * __this, KeyValuePair_2U5BU5D_t9575* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61482(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8448 *, KeyValuePair_2U5BU5D_t9575*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61482_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61484_gshared (Dictionary_2_t8448 * __this, KeyValuePair_2_t8424  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61484(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8448 *, KeyValuePair_2_t8424 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61484_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m61486_gshared (Dictionary_2_t8448 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m61486(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8448 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m61486_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61488_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61488(__this, method) (( Object_t * (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61488_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61490_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61490(__this, method) (( Object_t* (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61490_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61492_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61492(__this, method) (( Object_t * (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m61494_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m61494(__this, method) (( int32_t (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_get_Count_m61494_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t70  Dictionary_2_get_Item_m61496_gshared (Dictionary_2_t8448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m61496(__this, ___key, method) (( KeyValuePair_2_t70  (*) (Dictionary_2_t8448 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m61496_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m61498_gshared (Dictionary_2_t8448 * __this, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m61498(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8448 *, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_set_Item_m61498_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m61500_gshared (Dictionary_2_t8448 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m61500(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8448 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m61500_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m61502_gshared (Dictionary_2_t8448 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m61502(__this, ___size, method) (( void (*) (Dictionary_2_t8448 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m61502_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m61504_gshared (Dictionary_2_t8448 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m61504(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8448 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m61504_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8424  Dictionary_2_make_pair_m61506_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m61506(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8424  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_make_pair_m61506_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m61508_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m61508(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_pick_key_m61508_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t70  Dictionary_2_pick_value_m61510_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m61510(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t70  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_pick_value_m61510_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m61512_gshared (Dictionary_2_t8448 * __this, KeyValuePair_2U5BU5D_t9575* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m61512(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8448 *, KeyValuePair_2U5BU5D_t9575*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m61512_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m61514_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m61514(__this, method) (( void (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_Resize_m61514_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m61516_gshared (Dictionary_2_t8448 * __this, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m61516(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8448 *, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_Add_m61516_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m61518_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m61518(__this, method) (( void (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_Clear_m61518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m61520_gshared (Dictionary_2_t8448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m61520(__this, ___key, method) (( bool (*) (Dictionary_2_t8448 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m61520_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m61522_gshared (Dictionary_2_t8448 * __this, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m61522(__this, ___value, method) (( bool (*) (Dictionary_2_t8448 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_ContainsValue_m61522_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m61524_gshared (Dictionary_2_t8448 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m61524(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8448 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m61524_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m61526_gshared (Dictionary_2_t8448 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m61526(__this, ___sender, method) (( void (*) (Dictionary_2_t8448 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m61526_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m61528_gshared (Dictionary_2_t8448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m61528(__this, ___key, method) (( bool (*) (Dictionary_2_t8448 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m61528_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m61530_gshared (Dictionary_2_t8448 * __this, Object_t * ___key, KeyValuePair_2_t70 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m61530(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8448 *, Object_t *, KeyValuePair_2_t70 *, const MethodInfo*))Dictionary_2_TryGetValue_m61530_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t8449 * Dictionary_2_get_Keys_m61532_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m61532(__this, method) (( KeyCollection_t8449 * (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_get_Keys_m61532_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t8453 * Dictionary_2_get_Values_m61534_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m61534(__this, method) (( ValueCollection_t8453 * (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_get_Values_m61534_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m61536_gshared (Dictionary_2_t8448 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m61536(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8448 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m61536_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t70  Dictionary_2_ToTValue_m61538_gshared (Dictionary_2_t8448 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m61538(__this, ___value, method) (( KeyValuePair_2_t70  (*) (Dictionary_2_t8448 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m61538_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m61540_gshared (Dictionary_2_t8448 * __this, KeyValuePair_2_t8424  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m61540(__this, ___pair, method) (( bool (*) (Dictionary_2_t8448 *, KeyValuePair_2_t8424 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m61540_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t8451  Dictionary_2_GetEnumerator_m61542_gshared (Dictionary_2_t8448 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m61542(__this, method) (( Enumerator_t8451  (*) (Dictionary_2_t8448 *, const MethodInfo*))Dictionary_2_GetEnumerator_m61542_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2090  Dictionary_2_U3CCopyToU3Em__0_m61544_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m61544(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m61544_gshared)(__this /* static, unused */, ___key, ___value, method)
