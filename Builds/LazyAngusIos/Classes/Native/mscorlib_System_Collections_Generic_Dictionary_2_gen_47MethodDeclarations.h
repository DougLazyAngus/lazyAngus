#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1438;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Collections.ICollection
struct ICollection_t706;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t5397;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t5401;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1136;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t1467;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t5966;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5407;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m21551_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m21551(__this, method) (( void (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2__ctor_m21551_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21553_gshared (Dictionary_2_t1438 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21553(__this, ___comparer, method) (( void (*) (Dictionary_2_t1438 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21553_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m21555_gshared (Dictionary_2_t1438 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m21555(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1438 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21555_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21557_gshared (Dictionary_2_t1438 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21557(__this, ___capacity, method) (( void (*) (Dictionary_2_t1438 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21559_gshared (Dictionary_2_t1438 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21559(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1438 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21559_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21561_gshared (Dictionary_2_t1438 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21561(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1438 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m21561_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21563_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21563(__this, method) (( Object_t* (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21563_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21565_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21565(__this, method) (( Object_t* (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21565_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m21567_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m21567(__this, method) (( Object_t * (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21567_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21569_gshared (Dictionary_2_t1438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21569(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1438 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21569_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21571_gshared (Dictionary_2_t1438 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21571(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1438 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21571_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21573_gshared (Dictionary_2_t1438 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21573(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1438 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21573_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21575_gshared (Dictionary_2_t1438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21575(__this, ___key, method) (( bool (*) (Dictionary_2_t1438 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21575_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21577_gshared (Dictionary_2_t1438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21577(__this, ___key, method) (( void (*) (Dictionary_2_t1438 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21577_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21579_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21579(__this, method) (( bool (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21579_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21581_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21581(__this, method) (( Object_t * (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21583_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21583(__this, method) (( bool (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21583_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21585_gshared (Dictionary_2_t1438 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21585(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1438 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21585_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21587_gshared (Dictionary_2_t1438 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21587(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1438 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21587_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21589_gshared (Dictionary_2_t1438 * __this, KeyValuePair_2U5BU5D_t5966* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21589(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1438 *, KeyValuePair_2U5BU5D_t5966*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21589_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21591_gshared (Dictionary_2_t1438 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21591(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1438 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21591_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21593_gshared (Dictionary_2_t1438 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21593(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1438 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21593_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21595_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21595(__this, method) (( Object_t * (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21595_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21597_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21597(__this, method) (( Object_t* (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21597_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21599_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21599(__this, method) (( Object_t * (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21599_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21601_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21601(__this, method) (( int32_t (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_get_Count_m21601_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m21603_gshared (Dictionary_2_t1438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21603(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1438 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21603_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21605_gshared (Dictionary_2_t1438 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21605(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1438 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m21605_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21607_gshared (Dictionary_2_t1438 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21607(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1438 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21607_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21609_gshared (Dictionary_2_t1438 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21609(__this, ___size, method) (( void (*) (Dictionary_2_t1438 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21609_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21611_gshared (Dictionary_2_t1438 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21611(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1438 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21611_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t70  Dictionary_2_make_pair_m21613_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21613(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t70  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m21613_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21615_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21615(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m21615_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m21617_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21617(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m21617_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21619_gshared (Dictionary_2_t1438 * __this, KeyValuePair_2U5BU5D_t5966* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21619(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1438 *, KeyValuePair_2U5BU5D_t5966*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21619_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m21621_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21621(__this, method) (( void (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_Resize_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21623_gshared (Dictionary_2_t1438 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21623(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1438 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m21623_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m21625_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21625(__this, method) (( void (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_Clear_m21625_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21627_gshared (Dictionary_2_t1438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21627(__this, ___key, method) (( bool (*) (Dictionary_2_t1438 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21627_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21629_gshared (Dictionary_2_t1438 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21629(__this, ___value, method) (( bool (*) (Dictionary_2_t1438 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21629_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21631_gshared (Dictionary_2_t1438 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21631(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1438 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m21631_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21633_gshared (Dictionary_2_t1438 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21633(__this, ___sender, method) (( void (*) (Dictionary_2_t1438 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21633_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21635_gshared (Dictionary_2_t1438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21635(__this, ___key, method) (( bool (*) (Dictionary_2_t1438 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21635_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21637_gshared (Dictionary_2_t1438 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21637(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1438 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21637_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t5397 * Dictionary_2_get_Keys_m21638_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21638(__this, method) (( KeyCollection_t5397 * (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_get_Keys_m21638_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t5401 * Dictionary_2_get_Values_m21640_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21640(__this, method) (( ValueCollection_t5401 * (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_get_Values_m21640_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21642_gshared (Dictionary_2_t1438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21642(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1438 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21642_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m21644_gshared (Dictionary_2_t1438 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21644(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1438 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21644_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21646_gshared (Dictionary_2_t1438 * __this, KeyValuePair_2_t70  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21646(__this, ___pair, method) (( bool (*) (Dictionary_2_t1438 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21646_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t5399  Dictionary_2_GetEnumerator_m21647_gshared (Dictionary_2_t1438 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21647(__this, method) (( Enumerator_t5399  (*) (Dictionary_2_t1438 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21647_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2090  Dictionary_2_U3CCopyToU3Em__0_m21649_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21649(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21649_gshared)(__this /* static, unused */, ___key, ___value, method)
