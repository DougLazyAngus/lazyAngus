#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8344;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9080;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8710;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t8345;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
struct ValueCollection_t8349;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6010;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t8340;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9580;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
struct IEnumerator_1_t9581;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_131.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__62.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m59752_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m59752(__this, method) (( void (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2__ctor_m59752_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m59753_gshared (Dictionary_2_t8344 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m59753(__this, ___comparer, method) (( void (*) (Dictionary_2_t8344 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m59753_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m59754_gshared (Dictionary_2_t8344 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m59754(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8344 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m59754_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m59755_gshared (Dictionary_2_t8344 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m59755(__this, ___capacity, method) (( void (*) (Dictionary_2_t8344 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m59755_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m59756_gshared (Dictionary_2_t8344 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m59756(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8344 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m59756_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m59757_gshared (Dictionary_2_t8344 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m59757(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8344 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m59757_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59758_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59758(__this, method) (( Object_t* (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m59758_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59759_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59759(__this, method) (( Object_t* (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m59759_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m59760_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m59760(__this, method) (( Object_t * (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m59760_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m59761_gshared (Dictionary_2_t8344 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m59761(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8344 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m59761_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m59762_gshared (Dictionary_2_t8344 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m59762(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8344 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m59762_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m59763_gshared (Dictionary_2_t8344 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m59763(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8344 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m59763_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m59764_gshared (Dictionary_2_t8344 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m59764(__this, ___key, method) (( bool (*) (Dictionary_2_t8344 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m59764_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m59765_gshared (Dictionary_2_t8344 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m59765(__this, ___key, method) (( void (*) (Dictionary_2_t8344 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m59765_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59766_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59766(__this, method) (( bool (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59766_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59767_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59767(__this, method) (( Object_t * (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59767_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59768_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59768(__this, method) (( bool (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59768_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m59769_gshared (Dictionary_2_t8344 * __this, KeyValuePair_2_t8341  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m59769(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8344 *, KeyValuePair_2_t8341 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m59769_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m59770_gshared (Dictionary_2_t8344 * __this, KeyValuePair_2_t8341  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m59770(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8344 *, KeyValuePair_2_t8341 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m59770_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59771_gshared (Dictionary_2_t8344 * __this, KeyValuePair_2U5BU5D_t9580* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59771(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8344 *, KeyValuePair_2U5BU5D_t9580*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59771_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m59772_gshared (Dictionary_2_t8344 * __this, KeyValuePair_2_t8341  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m59772(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8344 *, KeyValuePair_2_t8341 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m59772_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m59773_gshared (Dictionary_2_t8344 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m59773(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8344 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m59773_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59774_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59774(__this, method) (( Object_t * (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59774_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59775_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59775(__this, method) (( Object_t* (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59775_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59776_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59776(__this, method) (( Object_t * (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59776_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m59777_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m59777(__this, method) (( int32_t (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_get_Count_m59777_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m59778_gshared (Dictionary_2_t8344 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m59778(__this, ___key, method) (( int32_t (*) (Dictionary_2_t8344 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m59778_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m59779_gshared (Dictionary_2_t8344 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m59779(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8344 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m59779_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m59780_gshared (Dictionary_2_t8344 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m59780(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8344 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m59780_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m59781_gshared (Dictionary_2_t8344 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m59781(__this, ___size, method) (( void (*) (Dictionary_2_t8344 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m59781_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m59782_gshared (Dictionary_2_t8344 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m59782(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8344 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m59782_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8341  Dictionary_2_make_pair_m59783_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m59783(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8341  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m59783_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m59784_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m59784(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m59784_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m59785_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m59785(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m59785_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m59786_gshared (Dictionary_2_t8344 * __this, KeyValuePair_2U5BU5D_t9580* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m59786(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8344 *, KeyValuePair_2U5BU5D_t9580*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m59786_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m59787_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m59787(__this, method) (( void (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_Resize_m59787_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m59788_gshared (Dictionary_2_t8344 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m59788(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8344 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_Add_m59788_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m59789_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m59789(__this, method) (( void (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_Clear_m59789_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m59790_gshared (Dictionary_2_t8344 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m59790(__this, ___key, method) (( bool (*) (Dictionary_2_t8344 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m59790_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m59791_gshared (Dictionary_2_t8344 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m59791(__this, ___value, method) (( bool (*) (Dictionary_2_t8344 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m59791_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m59792_gshared (Dictionary_2_t8344 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m59792(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8344 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m59792_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m59793_gshared (Dictionary_2_t8344 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m59793(__this, ___sender, method) (( void (*) (Dictionary_2_t8344 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m59793_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m59794_gshared (Dictionary_2_t8344 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m59794(__this, ___key, method) (( bool (*) (Dictionary_2_t8344 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m59794_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m59795_gshared (Dictionary_2_t8344 * __this, int64_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m59795(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8344 *, int64_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m59795_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Keys()
extern "C" KeyCollection_t8345 * Dictionary_2_get_Keys_m59796_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m59796(__this, method) (( KeyCollection_t8345 * (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_get_Keys_m59796_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Values()
extern "C" ValueCollection_t8349 * Dictionary_2_get_Values_m59797_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m59797(__this, method) (( ValueCollection_t8349 * (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_get_Values_m59797_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m59798_gshared (Dictionary_2_t8344 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m59798(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8344 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m59798_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m59799_gshared (Dictionary_2_t8344 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m59799(__this, ___value, method) (( int32_t (*) (Dictionary_2_t8344 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m59799_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m59800_gshared (Dictionary_2_t8344 * __this, KeyValuePair_2_t8341  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m59800(__this, ___pair, method) (( bool (*) (Dictionary_2_t8344 *, KeyValuePair_2_t8341 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m59800_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8347  Dictionary_2_GetEnumerator_m59801_gshared (Dictionary_2_t8344 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m59801(__this, method) (( Enumerator_t8347  (*) (Dictionary_2_t8344 *, const MethodInfo*))Dictionary_2_GetEnumerator_m59801_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m59802_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m59802(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m59802_gshared)(__this /* static, unused */, ___key, ___value, method)
