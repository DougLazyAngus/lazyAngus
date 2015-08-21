#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5529;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8710;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t5532;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t5536;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1185;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t8806;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7560;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7230;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m23741_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23741(__this, method) (( void (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2__ctor_m23741_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23743_gshared (Dictionary_2_t5529 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23743(__this, ___comparer, method) (( void (*) (Dictionary_2_t5529 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23743_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m23745_gshared (Dictionary_2_t5529 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m23745(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5529 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23745_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23746_gshared (Dictionary_2_t5529 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23746(__this, ___capacity, method) (( void (*) (Dictionary_2_t5529 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23746_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23748_gshared (Dictionary_2_t5529 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23748(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5529 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23748_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23750_gshared (Dictionary_2_t5529 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23750(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5529 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m23750_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23752_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23752(__this, method) (( Object_t* (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23752_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23754_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23754(__this, method) (( Object_t* (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23754_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m23756_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23756(__this, method) (( Object_t * (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m23756_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23758_gshared (Dictionary_2_t5529 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23758(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5529 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23758_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23760_gshared (Dictionary_2_t5529 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23760(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5529 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23760_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23762_gshared (Dictionary_2_t5529 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23762(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5529 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23762_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23764_gshared (Dictionary_2_t5529 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23764(__this, ___key, method) (( bool (*) (Dictionary_2_t5529 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23764_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23766_gshared (Dictionary_2_t5529 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23766(__this, ___key, method) (( void (*) (Dictionary_2_t5529 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23766_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23768_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23768(__this, method) (( bool (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23768_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23770_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23770(__this, method) (( Object_t * (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23770_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23772_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23772(__this, method) (( bool (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23772_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23774_gshared (Dictionary_2_t5529 * __this, KeyValuePair_2_t5530  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23774(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5529 *, KeyValuePair_2_t5530 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23774_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23776_gshared (Dictionary_2_t5529 * __this, KeyValuePair_2_t5530  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23776(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5529 *, KeyValuePair_2_t5530 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23776_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23778_gshared (Dictionary_2_t5529 * __this, KeyValuePair_2U5BU5D_t7560* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23778(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5529 *, KeyValuePair_2U5BU5D_t7560*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23778_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23780_gshared (Dictionary_2_t5529 * __this, KeyValuePair_2_t5530  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23780(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5529 *, KeyValuePair_2_t5530 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23780_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23782_gshared (Dictionary_2_t5529 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23782(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5529 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23782_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23784_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23784(__this, method) (( Object_t * (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23784_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23786_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23786(__this, method) (( Object_t* (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23786_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23788_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23788(__this, method) (( Object_t * (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23788_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23790_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23790(__this, method) (( int32_t (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_get_Count_m23790_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m23792_gshared (Dictionary_2_t5529 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23792(__this, ___key, method) (( int32_t (*) (Dictionary_2_t5529 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m23792_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23794_gshared (Dictionary_2_t5529 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23794(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5529 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m23794_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23796_gshared (Dictionary_2_t5529 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23796(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5529 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23796_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23798_gshared (Dictionary_2_t5529 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23798(__this, ___size, method) (( void (*) (Dictionary_2_t5529 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23798_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23800_gshared (Dictionary_2_t5529 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23800(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5529 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23800_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5530  Dictionary_2_make_pair_m23802_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23802(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5530  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m23802_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23804_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23804(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m23804_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m23806_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23806(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m23806_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23808_gshared (Dictionary_2_t5529 * __this, KeyValuePair_2U5BU5D_t7560* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23808(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5529 *, KeyValuePair_2U5BU5D_t7560*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23808_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m23810_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23810(__this, method) (( void (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_Resize_m23810_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23812_gshared (Dictionary_2_t5529 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23812(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5529 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m23812_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m23814_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23814(__this, method) (( void (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_Clear_m23814_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23816_gshared (Dictionary_2_t5529 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23816(__this, ___key, method) (( bool (*) (Dictionary_2_t5529 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m23816_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23818_gshared (Dictionary_2_t5529 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23818(__this, ___value, method) (( bool (*) (Dictionary_2_t5529 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m23818_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23820_gshared (Dictionary_2_t5529 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23820(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5529 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m23820_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23822_gshared (Dictionary_2_t5529 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23822(__this, ___sender, method) (( void (*) (Dictionary_2_t5529 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23822_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23824_gshared (Dictionary_2_t5529 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23824(__this, ___key, method) (( bool (*) (Dictionary_2_t5529 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m23824_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23826_gshared (Dictionary_2_t5529 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23826(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5529 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m23826_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t5532 * Dictionary_2_get_Keys_m23828_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23828(__this, method) (( KeyCollection_t5532 * (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_get_Keys_m23828_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t5536 * Dictionary_2_get_Values_m23830_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23830(__this, method) (( ValueCollection_t5536 * (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_get_Values_m23830_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23832_gshared (Dictionary_2_t5529 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23832(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5529 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23832_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m23834_gshared (Dictionary_2_t5529 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23834(__this, ___value, method) (( int32_t (*) (Dictionary_2_t5529 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23834_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23836_gshared (Dictionary_2_t5529 * __this, KeyValuePair_2_t5530  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23836(__this, ___pair, method) (( bool (*) (Dictionary_2_t5529 *, KeyValuePair_2_t5530 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23836_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5534  Dictionary_2_GetEnumerator_m23838_gshared (Dictionary_2_t5529 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23838(__this, method) (( Enumerator_t5534  (*) (Dictionary_2_t5529 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23838_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m23840_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23840(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23840_gshared)(__this /* static, unused */, ___key, ___value, method)
