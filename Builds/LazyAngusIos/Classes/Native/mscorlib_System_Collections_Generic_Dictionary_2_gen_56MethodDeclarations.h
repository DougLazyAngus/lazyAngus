#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6205;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9130;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t6206;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t6210;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1187;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t9136;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7284;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7186;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__41.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m33422_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m33422(__this, method) (( void (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2__ctor_m33422_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33423_gshared (Dictionary_2_t6205 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33423(__this, ___comparer, method) (( void (*) (Dictionary_2_t6205 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33423_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m33425_gshared (Dictionary_2_t6205 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m33425(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6205 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33425_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m33427_gshared (Dictionary_2_t6205 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m33427(__this, ___capacity, method) (( void (*) (Dictionary_2_t6205 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m33427_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33429_gshared (Dictionary_2_t6205 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33429(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6205 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33429_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m33431_gshared (Dictionary_2_t6205 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m33431(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6205 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m33431_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33433_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33433(__this, method) (( Object_t* (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33433_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33435_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33435(__this, method) (( Object_t* (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33435_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m33437_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33437(__this, method) (( Object_t * (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m33437_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m33439_gshared (Dictionary_2_t6205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33439(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6205 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m33439_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m33441_gshared (Dictionary_2_t6205 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33441(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6205 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m33441_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m33443_gshared (Dictionary_2_t6205 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m33443(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6205 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m33443_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m33445_gshared (Dictionary_2_t6205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m33445(__this, ___key, method) (( bool (*) (Dictionary_2_t6205 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m33445_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m33447_gshared (Dictionary_2_t6205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m33447(__this, ___key, method) (( void (*) (Dictionary_2_t6205 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m33447_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33449_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33449(__this, method) (( bool (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33449_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33451_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33451(__this, method) (( Object_t * (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33451_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33453_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33453(__this, method) (( bool (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33453_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33455_gshared (Dictionary_2_t6205 * __this, KeyValuePair_2_t6182  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33455(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6205 *, KeyValuePair_2_t6182 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33455_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33457_gshared (Dictionary_2_t6205 * __this, KeyValuePair_2_t6182  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33457(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6205 *, KeyValuePair_2_t6182 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33457_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33459_gshared (Dictionary_2_t6205 * __this, KeyValuePair_2U5BU5D_t7284* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33459(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6205 *, KeyValuePair_2U5BU5D_t7284*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33459_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33461_gshared (Dictionary_2_t6205 * __this, KeyValuePair_2_t6182  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33461(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6205 *, KeyValuePair_2_t6182 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33461_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m33463_gshared (Dictionary_2_t6205 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33463(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6205 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m33463_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33465_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33465(__this, method) (( Object_t * (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33465_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33467_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33467(__this, method) (( Object_t* (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33467_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33469_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33469(__this, method) (( Object_t * (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33469_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m33471_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m33471(__this, method) (( int32_t (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_get_Count_m33471_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m33473_gshared (Dictionary_2_t6205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m33473(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6205 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m33473_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m33475_gshared (Dictionary_2_t6205 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m33475(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6205 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m33475_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m33477_gshared (Dictionary_2_t6205 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m33477(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6205 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m33477_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m33479_gshared (Dictionary_2_t6205 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m33479(__this, ___size, method) (( void (*) (Dictionary_2_t6205 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m33479_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m33481_gshared (Dictionary_2_t6205 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m33481(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6205 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m33481_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6182  Dictionary_2_make_pair_m33483_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m33483(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6182  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m33483_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m33485_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m33485(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m33485_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m33487_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m33487(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m33487_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m33489_gshared (Dictionary_2_t6205 * __this, KeyValuePair_2U5BU5D_t7284* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m33489(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6205 *, KeyValuePair_2U5BU5D_t7284*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m33489_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m33491_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m33491(__this, method) (( void (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_Resize_m33491_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m33493_gshared (Dictionary_2_t6205 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m33493(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6205 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m33493_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m33495_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m33495(__this, method) (( void (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_Clear_m33495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m33497_gshared (Dictionary_2_t6205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m33497(__this, ___key, method) (( bool (*) (Dictionary_2_t6205 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m33497_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m33499_gshared (Dictionary_2_t6205 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m33499(__this, ___value, method) (( bool (*) (Dictionary_2_t6205 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m33499_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m33501_gshared (Dictionary_2_t6205 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m33501(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6205 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m33501_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m33503_gshared (Dictionary_2_t6205 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m33503(__this, ___sender, method) (( void (*) (Dictionary_2_t6205 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m33503_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m33505_gshared (Dictionary_2_t6205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m33505(__this, ___key, method) (( bool (*) (Dictionary_2_t6205 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m33505_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m33507_gshared (Dictionary_2_t6205 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m33507(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6205 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m33507_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t6206 * Dictionary_2_get_Keys_m33509_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m33509(__this, method) (( KeyCollection_t6206 * (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_get_Keys_m33509_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t6210 * Dictionary_2_get_Values_m33511_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m33511(__this, method) (( ValueCollection_t6210 * (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_get_Values_m33511_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m33513_gshared (Dictionary_2_t6205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m33513(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6205 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m33513_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m33515_gshared (Dictionary_2_t6205 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m33515(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6205 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m33515_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m33517_gshared (Dictionary_2_t6205 * __this, KeyValuePair_2_t6182  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m33517(__this, ___pair, method) (( bool (*) (Dictionary_2_t6205 *, KeyValuePair_2_t6182 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m33517_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6208  Dictionary_2_GetEnumerator_m33519_gshared (Dictionary_2_t6205 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m33519(__this, method) (( Enumerator_t6208  (*) (Dictionary_2_t6205 *, const MethodInfo*))Dictionary_2_GetEnumerator_m33519_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m33521_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m33521(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m33521_gshared)(__this /* static, unused */, ___key, ___value, method)
