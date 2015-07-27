#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3943;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1291;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t4597;
// System.Collections.ICollection
struct ICollection_t652;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t3947;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t3951;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3390;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t4601;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t4602;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t4603;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1942;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__33.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m26429_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m26429(__this, method) (( void (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2__ctor_m26429_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26431_gshared (Dictionary_2_t3943 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26431(__this, ___comparer, method) (( void (*) (Dictionary_2_t3943 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26431_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m26433_gshared (Dictionary_2_t3943 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m26433(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3943 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26433_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m26435_gshared (Dictionary_2_t3943 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m26435(__this, ___capacity, method) (( void (*) (Dictionary_2_t3943 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26435_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26437_gshared (Dictionary_2_t3943 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26437(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3943 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26437_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m26439_gshared (Dictionary_2_t3943 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m26439(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3943 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2__ctor_m26439_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26441_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26441(__this, method) (( Object_t* (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26441_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26443_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26443(__this, method) (( Object_t* (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26443_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m26445_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m26445(__this, method) (( Object_t * (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26445_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m26447_gshared (Dictionary_2_t3943 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m26447(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3943 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26447_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m26449_gshared (Dictionary_2_t3943 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m26449(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3943 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26449_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m26451_gshared (Dictionary_2_t3943 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m26451(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3943 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26451_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m26453_gshared (Dictionary_2_t3943 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m26453(__this, ___key, method) (( bool (*) (Dictionary_2_t3943 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26453_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m26455_gshared (Dictionary_2_t3943 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m26455(__this, ___key, method) (( void (*) (Dictionary_2_t3943 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26455_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26457_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26457(__this, method) (( bool (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26457_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26459_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26459(__this, method) (( Object_t * (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26459_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26461_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26461(__this, method) (( bool (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26461_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26463_gshared (Dictionary_2_t3943 * __this, KeyValuePair_2_t3944  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26463(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3943 *, KeyValuePair_2_t3944 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26463_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26465_gshared (Dictionary_2_t3943 * __this, KeyValuePair_2_t3944  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26465(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3943 *, KeyValuePair_2_t3944 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26465_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26467_gshared (Dictionary_2_t3943 * __this, KeyValuePair_2U5BU5D_t4602* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26467(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3943 *, KeyValuePair_2U5BU5D_t4602*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26467_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26469_gshared (Dictionary_2_t3943 * __this, KeyValuePair_2_t3944  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26469(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3943 *, KeyValuePair_2_t3944 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26469_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m26471_gshared (Dictionary_2_t3943 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m26471(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3943 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26471_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26473_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26473(__this, method) (( Object_t * (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26473_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26475_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26475(__this, method) (( Object_t* (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26475_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26477_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26477(__this, method) (( Object_t * (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26477_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m26479_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m26479(__this, method) (( int32_t (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_get_Count_m26479_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m26481_gshared (Dictionary_2_t3943 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m26481(__this, ___key, method) (( int64_t (*) (Dictionary_2_t3943 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m26481_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m26483_gshared (Dictionary_2_t3943 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m26483(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3943 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m26483_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m26485_gshared (Dictionary_2_t3943 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m26485(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3943 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26485_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m26487_gshared (Dictionary_2_t3943 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m26487(__this, ___size, method) (( void (*) (Dictionary_2_t3943 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26487_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m26489_gshared (Dictionary_2_t3943 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m26489(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3943 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26489_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3944  Dictionary_2_make_pair_m26491_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m26491(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3944  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m26491_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m26493_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m26493(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m26493_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m26495_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m26495(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m26495_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m26497_gshared (Dictionary_2_t3943 * __this, KeyValuePair_2U5BU5D_t4602* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m26497(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3943 *, KeyValuePair_2U5BU5D_t4602*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26497_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m26499_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m26499(__this, method) (( void (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_Resize_m26499_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m26501_gshared (Dictionary_2_t3943 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m26501(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3943 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m26501_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m26503_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m26503(__this, method) (( void (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_Clear_m26503_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m26505_gshared (Dictionary_2_t3943 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m26505(__this, ___key, method) (( bool (*) (Dictionary_2_t3943 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m26505_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m26507_gshared (Dictionary_2_t3943 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m26507(__this, ___value, method) (( bool (*) (Dictionary_2_t3943 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m26507_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m26509_gshared (Dictionary_2_t3943 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m26509(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3943 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2_GetObjectData_m26509_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m26511_gshared (Dictionary_2_t3943 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m26511(__this, ___sender, method) (( void (*) (Dictionary_2_t3943 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26511_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m26513_gshared (Dictionary_2_t3943 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m26513(__this, ___key, method) (( bool (*) (Dictionary_2_t3943 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m26513_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m26515_gshared (Dictionary_2_t3943 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m26515(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3943 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m26515_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t3947 * Dictionary_2_get_Keys_m26517_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m26517(__this, method) (( KeyCollection_t3947 * (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_get_Keys_m26517_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t3951 * Dictionary_2_get_Values_m26519_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m26519(__this, method) (( ValueCollection_t3951 * (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_get_Values_m26519_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m26521_gshared (Dictionary_2_t3943 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m26521(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3943 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26521_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m26523_gshared (Dictionary_2_t3943 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m26523(__this, ___value, method) (( int64_t (*) (Dictionary_2_t3943 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26523_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m26525_gshared (Dictionary_2_t3943 * __this, KeyValuePair_2_t3944  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m26525(__this, ___pair, method) (( bool (*) (Dictionary_2_t3943 *, KeyValuePair_2_t3944 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26525_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t3949  Dictionary_2_GetEnumerator_m26527_gshared (Dictionary_2_t3943 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m26527(__this, method) (( Enumerator_t3949  (*) (Dictionary_2_t3943 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26527_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2180  Dictionary_2_U3CCopyToU3Em__0_m26529_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m26529(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2180  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m26529_gshared)(__this /* static, unused */, ___key, ___value, method)
