#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2794;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8624;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1161;
// System.Collections.ICollection
struct ICollection_t696;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t5345;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t5349;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5336;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t8628;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t8629;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t8630;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3901;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9853_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9853(__this, method) (( void (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2__ctor_m9853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20773_gshared (Dictionary_2_t2794 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20773(__this, ___comparer, method) (( void (*) (Dictionary_2_t2794 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20773_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20775_gshared (Dictionary_2_t2794 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m20775(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2794 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20775_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20777_gshared (Dictionary_2_t2794 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20777(__this, ___capacity, method) (( void (*) (Dictionary_2_t2794 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20777_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20779_gshared (Dictionary_2_t2794 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20779(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2794 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20779_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20781_gshared (Dictionary_2_t2794 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20781(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2794 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2__ctor_m20781_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20783_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20783(__this, method) (( Object_t* (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20783_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20785_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20785(__this, method) (( Object_t* (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20785_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m20787_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m20787(__this, method) (( Object_t * (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20787_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20789_gshared (Dictionary_2_t2794 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20789(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2794 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20789_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20791_gshared (Dictionary_2_t2794 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20791(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2794 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20791_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20793_gshared (Dictionary_2_t2794 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20793(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2794 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20793_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20795_gshared (Dictionary_2_t2794 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20795(__this, ___key, method) (( bool (*) (Dictionary_2_t2794 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20795_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20797_gshared (Dictionary_2_t2794 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20797(__this, ___key, method) (( void (*) (Dictionary_2_t2794 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20797_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20799_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20799(__this, method) (( bool (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20799_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20801_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20801(__this, method) (( Object_t * (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20801_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20803_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20803(__this, method) (( bool (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20803_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20805_gshared (Dictionary_2_t2794 * __this, KeyValuePair_2_t5339  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20805(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2794 *, KeyValuePair_2_t5339 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20805_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20807_gshared (Dictionary_2_t2794 * __this, KeyValuePair_2_t5339  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20807(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2794 *, KeyValuePair_2_t5339 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20807_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20809_gshared (Dictionary_2_t2794 * __this, KeyValuePair_2U5BU5D_t8629* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20809(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2794 *, KeyValuePair_2U5BU5D_t8629*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20809_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20811_gshared (Dictionary_2_t2794 * __this, KeyValuePair_2_t5339  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20811(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2794 *, KeyValuePair_2_t5339 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20811_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20813_gshared (Dictionary_2_t2794 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20813(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2794 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20813_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20815_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20815(__this, method) (( Object_t * (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20815_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20817_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20817(__this, method) (( Object_t* (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20817_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20819_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20819(__this, method) (( Object_t * (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20819_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20821_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20821(__this, method) (( int32_t (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_get_Count_m20821_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m20823_gshared (Dictionary_2_t2794 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20823(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2794 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20823_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20825_gshared (Dictionary_2_t2794 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20825(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2794 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m20825_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20827_gshared (Dictionary_2_t2794 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20827(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2794 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20827_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20829_gshared (Dictionary_2_t2794 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20829(__this, ___size, method) (( void (*) (Dictionary_2_t2794 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20829_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20831_gshared (Dictionary_2_t2794 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20831(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2794 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20831_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5339  Dictionary_2_make_pair_m20833_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20833(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5339  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m20833_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m20835_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20835(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m20835_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m20837_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20837(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m20837_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20839_gshared (Dictionary_2_t2794 * __this, KeyValuePair_2U5BU5D_t8629* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20839(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2794 *, KeyValuePair_2U5BU5D_t8629*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20839_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m20841_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m20841(__this, method) (( void (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_Resize_m20841_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20843_gshared (Dictionary_2_t2794 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m20843(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2794 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m20843_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m20845_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m20845(__this, method) (( void (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_Clear_m20845_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20847_gshared (Dictionary_2_t2794 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m20847(__this, ___key, method) (( bool (*) (Dictionary_2_t2794 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20847_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20849_gshared (Dictionary_2_t2794 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m20849(__this, ___value, method) (( bool (*) (Dictionary_2_t2794 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m20849_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20851_gshared (Dictionary_2_t2794 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m20851(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2794 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2_GetObjectData_m20851_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20853_gshared (Dictionary_2_t2794 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20853(__this, ___sender, method) (( void (*) (Dictionary_2_t2794 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20853_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20855_gshared (Dictionary_2_t2794 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m20855(__this, ___key, method) (( bool (*) (Dictionary_2_t2794 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20855_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20857_gshared (Dictionary_2_t2794 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m20857(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2794 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m20857_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t5345 * Dictionary_2_get_Keys_m20859_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m20859(__this, method) (( KeyCollection_t5345 * (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_get_Keys_m20859_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t5349 * Dictionary_2_get_Values_m20861_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m20861(__this, method) (( ValueCollection_t5349 * (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_get_Values_m20861_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m20863_gshared (Dictionary_2_t2794 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m20863(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2794 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20863_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m20865_gshared (Dictionary_2_t2794 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m20865(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2794 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20865_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20867_gshared (Dictionary_2_t2794 * __this, KeyValuePair_2_t5339  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20867(__this, ___pair, method) (( bool (*) (Dictionary_2_t2794 *, KeyValuePair_2_t5339 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20867_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t5347  Dictionary_2_GetEnumerator_m20869_gshared (Dictionary_2_t2794 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20869(__this, method) (( Enumerator_t5347  (*) (Dictionary_2_t2794 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20869_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2079  Dictionary_2_U3CCopyToU3Em__0_m20871_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20871(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20871_gshared)(__this /* static, unused */, ___key, ___value, method)
