#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4124;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8706;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t8646;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8650;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5392;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t9715;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9716;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t9717;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_143.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__74.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m63789_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m63789(__this, method) (( void (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2__ctor_m63789_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m63790_gshared (Dictionary_2_t4124 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m63790(__this, ___comparer, method) (( void (*) (Dictionary_2_t4124 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63790_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m63791_gshared (Dictionary_2_t4124 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m63791(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4124 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63791_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m63792_gshared (Dictionary_2_t4124 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m63792(__this, ___capacity, method) (( void (*) (Dictionary_2_t4124 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m63792_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m63793_gshared (Dictionary_2_t4124 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m63793(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4124 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63793_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m63794_gshared (Dictionary_2_t4124 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m63794(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4124 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m63794_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63795_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63795(__this, method) (( Object_t* (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63795_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63796_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63796(__this, method) (( Object_t* (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63796_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m63797_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m63797(__this, method) (( Object_t * (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m63797_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m63798_gshared (Dictionary_2_t4124 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m63798(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4124 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m63798_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m63799_gshared (Dictionary_2_t4124 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m63799(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4124 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m63799_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m63800_gshared (Dictionary_2_t4124 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m63800(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4124 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m63800_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m63801_gshared (Dictionary_2_t4124 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m63801(__this, ___key, method) (( bool (*) (Dictionary_2_t4124 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m63801_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m63802_gshared (Dictionary_2_t4124 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m63802(__this, ___key, method) (( void (*) (Dictionary_2_t4124 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m63802_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63803_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63803(__this, method) (( bool (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63803_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63804_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63804(__this, method) (( Object_t * (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63804_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63805_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63805(__this, method) (( bool (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63805_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63806_gshared (Dictionary_2_t4124 * __this, KeyValuePair_2_t8644  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63806(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4124 *, KeyValuePair_2_t8644 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63806_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63807_gshared (Dictionary_2_t4124 * __this, KeyValuePair_2_t8644  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63807(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4124 *, KeyValuePair_2_t8644 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63807_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63808_gshared (Dictionary_2_t4124 * __this, KeyValuePair_2U5BU5D_t9716* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63808(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4124 *, KeyValuePair_2U5BU5D_t9716*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63808_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63809_gshared (Dictionary_2_t4124 * __this, KeyValuePair_2_t8644  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63809(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4124 *, KeyValuePair_2_t8644 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63809_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m63810_gshared (Dictionary_2_t4124 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m63810(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4124 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m63810_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63811_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63811(__this, method) (( Object_t * (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63811_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63812_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63812(__this, method) (( Object_t* (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63812_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63813_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63813(__this, method) (( Object_t * (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63813_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m63814_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m63814(__this, method) (( int32_t (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_get_Count_m63814_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m63815_gshared (Dictionary_2_t4124 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m63815(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4124 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m63815_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m63816_gshared (Dictionary_2_t4124 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m63816(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4124 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m63816_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m63817_gshared (Dictionary_2_t4124 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m63817(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4124 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m63817_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m63818_gshared (Dictionary_2_t4124 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m63818(__this, ___size, method) (( void (*) (Dictionary_2_t4124 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m63818_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m63819_gshared (Dictionary_2_t4124 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m63819(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4124 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m63819_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8644  Dictionary_2_make_pair_m63820_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m63820(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8644  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m63820_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m63821_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m63821(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m63821_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m63822_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m63822(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m63822_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m63823_gshared (Dictionary_2_t4124 * __this, KeyValuePair_2U5BU5D_t9716* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m63823(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4124 *, KeyValuePair_2U5BU5D_t9716*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m63823_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m63824_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m63824(__this, method) (( void (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_Resize_m63824_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m63825_gshared (Dictionary_2_t4124 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m63825(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4124 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m63825_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m63826_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m63826(__this, method) (( void (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_Clear_m63826_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m63827_gshared (Dictionary_2_t4124 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m63827(__this, ___key, method) (( bool (*) (Dictionary_2_t4124 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m63827_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m63828_gshared (Dictionary_2_t4124 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m63828(__this, ___value, method) (( bool (*) (Dictionary_2_t4124 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m63828_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m63829_gshared (Dictionary_2_t4124 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m63829(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4124 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m63829_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m63830_gshared (Dictionary_2_t4124 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m63830(__this, ___sender, method) (( void (*) (Dictionary_2_t4124 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m63830_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m63831_gshared (Dictionary_2_t4124 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m63831(__this, ___key, method) (( bool (*) (Dictionary_2_t4124 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m63831_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m63832_gshared (Dictionary_2_t4124 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m63832(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4124 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m63832_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t8646 * Dictionary_2_get_Keys_m63833_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m63833(__this, method) (( KeyCollection_t8646 * (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_get_Keys_m63833_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t8650 * Dictionary_2_get_Values_m63834_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m63834(__this, method) (( ValueCollection_t8650 * (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_get_Values_m63834_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m63835_gshared (Dictionary_2_t4124 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m63835(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4124 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m63835_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m63836_gshared (Dictionary_2_t4124 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m63836(__this, ___value, method) (( int32_t (*) (Dictionary_2_t4124 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m63836_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m63837_gshared (Dictionary_2_t4124 * __this, KeyValuePair_2_t8644  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m63837(__this, ___pair, method) (( bool (*) (Dictionary_2_t4124 *, KeyValuePair_2_t8644 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m63837_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8648  Dictionary_2_GetEnumerator_m63838_gshared (Dictionary_2_t4124 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m63838(__this, method) (( Enumerator_t8648  (*) (Dictionary_2_t4124 *, const MethodInfo*))Dictionary_2_GetEnumerator_m63838_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m63839_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m63839(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m63839_gshared)(__this /* static, unused */, ___key, ___value, method)
