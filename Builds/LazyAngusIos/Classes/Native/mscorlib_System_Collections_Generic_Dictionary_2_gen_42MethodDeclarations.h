#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1620;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4158;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t4034;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t4038;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3354;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t4590;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4591;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t4592;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m27494_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m27494(__this, method) (( void (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2__ctor_m27494_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27495_gshared (Dictionary_2_t1620 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27495(__this, ___comparer, method) (( void (*) (Dictionary_2_t1620 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27495_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m27496_gshared (Dictionary_2_t1620 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m27496(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1620 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27496_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m27497_gshared (Dictionary_2_t1620 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m27497(__this, ___capacity, method) (( void (*) (Dictionary_2_t1620 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m27497_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27498_gshared (Dictionary_2_t1620 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27498(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1620 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27498_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m27499_gshared (Dictionary_2_t1620 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m27499(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1620 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m27499_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27500_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27500(__this, method) (( Object_t* (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27500_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27501_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27501(__this, method) (( Object_t* (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27501_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m27502_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27502(__this, method) (( Object_t * (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m27502_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m27503_gshared (Dictionary_2_t1620 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27503(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1620 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m27503_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m27504_gshared (Dictionary_2_t1620 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27504(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1620 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m27504_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m27505_gshared (Dictionary_2_t1620 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m27505(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1620 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m27505_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m27506_gshared (Dictionary_2_t1620 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m27506(__this, ___key, method) (( bool (*) (Dictionary_2_t1620 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m27506_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m27507_gshared (Dictionary_2_t1620 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m27507(__this, ___key, method) (( void (*) (Dictionary_2_t1620 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m27507_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27508_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27508(__this, method) (( bool (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27508_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27509_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27509(__this, method) (( Object_t * (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27509_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27510_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27510(__this, method) (( bool (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27510_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27511_gshared (Dictionary_2_t1620 * __this, KeyValuePair_2_t4032  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27511(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1620 *, KeyValuePair_2_t4032 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27511_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27512_gshared (Dictionary_2_t1620 * __this, KeyValuePair_2_t4032  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27512(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1620 *, KeyValuePair_2_t4032 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27512_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27513_gshared (Dictionary_2_t1620 * __this, KeyValuePair_2U5BU5D_t4591* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27513(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1620 *, KeyValuePair_2U5BU5D_t4591*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27513_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27514_gshared (Dictionary_2_t1620 * __this, KeyValuePair_2_t4032  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27514(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1620 *, KeyValuePair_2_t4032 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27514_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m27515_gshared (Dictionary_2_t1620 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27515(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1620 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m27515_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27516_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27516(__this, method) (( Object_t * (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27516_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27517_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27517(__this, method) (( Object_t* (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27517_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27518_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27518(__this, method) (( Object_t * (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27518_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m27519_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m27519(__this, method) (( int32_t (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_get_Count_m27519_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m27520_gshared (Dictionary_2_t1620 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m27520(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1620 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m27520_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m27521_gshared (Dictionary_2_t1620 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m27521(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1620 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m27521_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m27522_gshared (Dictionary_2_t1620 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m27522(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1620 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m27522_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m27523_gshared (Dictionary_2_t1620 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m27523(__this, ___size, method) (( void (*) (Dictionary_2_t1620 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m27523_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m27524_gshared (Dictionary_2_t1620 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m27524(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1620 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m27524_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4032  Dictionary_2_make_pair_m27525_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m27525(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4032  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m27525_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m27526_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m27526(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m27526_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m27527_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m27527(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m27527_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m27528_gshared (Dictionary_2_t1620 * __this, KeyValuePair_2U5BU5D_t4591* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m27528(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1620 *, KeyValuePair_2U5BU5D_t4591*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m27528_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m27529_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m27529(__this, method) (( void (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_Resize_m27529_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m27530_gshared (Dictionary_2_t1620 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m27530(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1620 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m27530_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m27531_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m27531(__this, method) (( void (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_Clear_m27531_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m27532_gshared (Dictionary_2_t1620 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m27532(__this, ___key, method) (( bool (*) (Dictionary_2_t1620 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m27532_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m27533_gshared (Dictionary_2_t1620 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m27533(__this, ___value, method) (( bool (*) (Dictionary_2_t1620 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m27533_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m27534_gshared (Dictionary_2_t1620 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m27534(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1620 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m27534_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m27535_gshared (Dictionary_2_t1620 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m27535(__this, ___sender, method) (( void (*) (Dictionary_2_t1620 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m27535_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m27536_gshared (Dictionary_2_t1620 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m27536(__this, ___key, method) (( bool (*) (Dictionary_2_t1620 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m27536_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m27537_gshared (Dictionary_2_t1620 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m27537(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1620 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m27537_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t4034 * Dictionary_2_get_Keys_m27538_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m27538(__this, method) (( KeyCollection_t4034 * (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_get_Keys_m27538_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t4038 * Dictionary_2_get_Values_m27539_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m27539(__this, method) (( ValueCollection_t4038 * (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_get_Values_m27539_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m27540_gshared (Dictionary_2_t1620 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m27540(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1620 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m27540_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m27541_gshared (Dictionary_2_t1620 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m27541(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1620 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m27541_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m27542_gshared (Dictionary_2_t1620 * __this, KeyValuePair_2_t4032  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m27542(__this, ___pair, method) (( bool (*) (Dictionary_2_t1620 *, KeyValuePair_2_t4032 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m27542_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t4036  Dictionary_2_GetEnumerator_m27543_gshared (Dictionary_2_t1620 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m27543(__this, method) (( Enumerator_t4036  (*) (Dictionary_2_t1620 *, const MethodInfo*))Dictionary_2_GetEnumerator_m27543_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1685  Dictionary_2_U3CCopyToU3Em__0_m27544_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m27544(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m27544_gshared)(__this /* static, unused */, ___key, ___value, method)
