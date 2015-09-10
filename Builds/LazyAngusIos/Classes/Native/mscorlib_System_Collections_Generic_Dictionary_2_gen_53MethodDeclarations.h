#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6092;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9342;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t6095;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t6099;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1215;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t9438;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8140;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7810;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m28174_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m28174(__this, method) (( void (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2__ctor_m28174_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28176_gshared (Dictionary_2_t6092 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28176(__this, ___comparer, method) (( void (*) (Dictionary_2_t6092 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28176_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m28178_gshared (Dictionary_2_t6092 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m28178(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6092 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28178_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m28179_gshared (Dictionary_2_t6092 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m28179(__this, ___capacity, method) (( void (*) (Dictionary_2_t6092 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m28179_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28181_gshared (Dictionary_2_t6092 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28181(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6092 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28181_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m28183_gshared (Dictionary_2_t6092 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m28183(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6092 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m28183_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28185_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28185(__this, method) (( Object_t* (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28185_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28187_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28187(__this, method) (( Object_t* (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28187_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m28189_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m28189(__this, method) (( Object_t * (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m28189_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m28191_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m28191(__this, method) (( Object_t * (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m28191_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m28193_gshared (Dictionary_2_t6092 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m28193(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6092 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m28193_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m28195_gshared (Dictionary_2_t6092 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m28195(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6092 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m28195_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m28197_gshared (Dictionary_2_t6092 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m28197(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6092 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m28197_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m28199_gshared (Dictionary_2_t6092 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m28199(__this, ___key, method) (( bool (*) (Dictionary_2_t6092 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m28199_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m28201_gshared (Dictionary_2_t6092 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m28201(__this, ___key, method) (( void (*) (Dictionary_2_t6092 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m28201_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28203_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28203(__this, method) (( bool (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28203_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28205_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28205(__this, method) (( Object_t * (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28205_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28207_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28207(__this, method) (( bool (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28207_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28209_gshared (Dictionary_2_t6092 * __this, KeyValuePair_2_t6093  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28209(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6092 *, KeyValuePair_2_t6093 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28209_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28211_gshared (Dictionary_2_t6092 * __this, KeyValuePair_2_t6093  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28211(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6092 *, KeyValuePair_2_t6093 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28211_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28213_gshared (Dictionary_2_t6092 * __this, KeyValuePair_2U5BU5D_t8140* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28213(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6092 *, KeyValuePair_2U5BU5D_t8140*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28213_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28215_gshared (Dictionary_2_t6092 * __this, KeyValuePair_2_t6093  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28215(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6092 *, KeyValuePair_2_t6093 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28215_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m28217_gshared (Dictionary_2_t6092 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m28217(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6092 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m28217_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28219_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28219(__this, method) (( Object_t * (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28219_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28221_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28221(__this, method) (( Object_t* (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28221_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28223_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28223(__this, method) (( Object_t * (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28223_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m28225_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m28225(__this, method) (( int32_t (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_get_Count_m28225_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m28227_gshared (Dictionary_2_t6092 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m28227(__this, ___key, method) (( int32_t (*) (Dictionary_2_t6092 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m28227_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m28229_gshared (Dictionary_2_t6092 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m28229(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6092 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m28229_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m28231_gshared (Dictionary_2_t6092 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m28231(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6092 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m28231_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m28233_gshared (Dictionary_2_t6092 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m28233(__this, ___size, method) (( void (*) (Dictionary_2_t6092 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m28233_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m28235_gshared (Dictionary_2_t6092 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m28235(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6092 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m28235_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6093  Dictionary_2_make_pair_m28237_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m28237(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6093  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m28237_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m28239_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m28239(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m28239_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m28241_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m28241(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m28241_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m28243_gshared (Dictionary_2_t6092 * __this, KeyValuePair_2U5BU5D_t8140* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m28243(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6092 *, KeyValuePair_2U5BU5D_t8140*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m28243_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m28245_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m28245(__this, method) (( void (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_Resize_m28245_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m28247_gshared (Dictionary_2_t6092 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m28247(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6092 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m28247_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m28249_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m28249(__this, method) (( void (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_Clear_m28249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m28251_gshared (Dictionary_2_t6092 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m28251(__this, ___key, method) (( bool (*) (Dictionary_2_t6092 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m28251_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m28253_gshared (Dictionary_2_t6092 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m28253(__this, ___value, method) (( bool (*) (Dictionary_2_t6092 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m28253_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m28255_gshared (Dictionary_2_t6092 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m28255(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6092 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m28255_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m28257_gshared (Dictionary_2_t6092 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m28257(__this, ___sender, method) (( void (*) (Dictionary_2_t6092 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m28257_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m28259_gshared (Dictionary_2_t6092 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m28259(__this, ___key, method) (( bool (*) (Dictionary_2_t6092 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m28259_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m28261_gshared (Dictionary_2_t6092 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m28261(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6092 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m28261_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t6095 * Dictionary_2_get_Keys_m28263_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m28263(__this, method) (( KeyCollection_t6095 * (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_get_Keys_m28263_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t6099 * Dictionary_2_get_Values_m28265_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m28265(__this, method) (( ValueCollection_t6099 * (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_get_Values_m28265_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m28267_gshared (Dictionary_2_t6092 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m28267(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6092 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m28267_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m28269_gshared (Dictionary_2_t6092 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m28269(__this, ___value, method) (( int32_t (*) (Dictionary_2_t6092 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m28269_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m28271_gshared (Dictionary_2_t6092 * __this, KeyValuePair_2_t6093  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m28271(__this, ___pair, method) (( bool (*) (Dictionary_2_t6092 *, KeyValuePair_2_t6093 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m28271_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t6097  Dictionary_2_GetEnumerator_m28273_gshared (Dictionary_2_t6092 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m28273(__this, method) (( Enumerator_t6097  (*) (Dictionary_2_t6092 *, const MethodInfo*))Dictionary_2_GetEnumerator_m28273_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m28275_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m28275(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m28275_gshared)(__this /* static, unused */, ___key, ___value, method)
